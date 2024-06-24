#include <iostream>
#include <vector>
#include <grpcpp/grpcpp.h>
#include "matrix_service.grpc.pb.h"

using namespace std;
using namespace matrix_service;

class MatrixClient {
public:
    MatrixClient(shared_ptr<grpc::Channel> channel)
        : stub_(MatrixService::NewStub(channel)) {}
    
    vector<int> SortArray(const vector<int>& arr) {
        ArrayRequest request;
        for (int value : arr) {
            request.add_array(value);
        }
        
        ArrayResponse response;
        grpc::ClientContext context;
        grpc::Status status = stub_->SortArray(&context, request, &response);
        
        if (!status.ok()) {
            cerr << "RPC failed: " << status.error_message() << endl;
            return {};
        }
        
        vector<int> sortedArray(response.array().begin(), response.array().end());
        return sortedArray;
    }
    
    int FindMinValue(const vector<int>& arr) {
        ArrayRequest request;
        for (int value : arr) {
            request.add_array(value);
        }
        
        MinMaxResponse response;
        grpc::ClientContext context;
        grpc::Status status = stub_->FindMinValue(&context, request, &response);
        
        if (!status.ok()) {
            cerr << "RPC failed: " << status.error_message() << endl;
            return -1;
        }
        
        return response.value();
    }
    
    int FindMaxValue(const vector<int>& arr) {
        ArrayRequest request;
        for (int value : arr) {
            request.add_array(value);
        }
        
        MinMaxResponse response;
        grpc::ClientContext context;
        grpc::Status status = stub_->FindMaxValue(&context, request, &response);
        
        if (!status.ok()) {
            cerr << "RPC failed: " << status.error_message() << endl;
            return -1;
        }
        
        return response.value();
    }
    
private:
    unique_ptr<MatrixService::Stub> stub_;
};

int main() {
    MatrixClient client(grpc::CreateChannel("localhost:50051", grpc::InsecureChannelCredentials()));

    int m, n;
    cout << "Enter rows:  ";
    cin >> m;
    cout << "Enter columns: ";
    cin >> n;
    
    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter elements:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }
 
    cout << "\nSorting each row: " << endl;
    for (int i = 0; i < m; i++) {
        matrix[i] = client.SortArray(matrix[i]);
    }
    
    cout << "Sorted matrix:" << endl;
    for (const auto& row : matrix) {
        for (int value : row) {
            cout << value << " ";
        }
        cout << endl;
    }
    
    int globalMin = INT_MAX;
    int globalMax = INT_MIN;
    
    for (const auto& row : matrix) {
        globalMin = min(globalMin, client.FindMinValue(row));
        globalMax = max(globalMax, client.FindMaxValue(row));
    }
    
    cout << "Minimum value in the matrix: " << globalMin << endl;
    cout << "Maximum value in the matrix: " << globalMax << endl;
    
    return 0;
}

