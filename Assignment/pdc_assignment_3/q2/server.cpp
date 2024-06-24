#include <iostream>
#include <vector>
#include <algorithm>
#include <grpcpp/grpcpp.h>
#include "matrix_service.grpc.pb.h"

using namespace std;
using namespace matrix_service;

class MatrixServiceImpl final : public MatrixService::Service {
public:
    grpc::Status SortArray(grpc::ServerContext* context, const ArrayRequest* request, ArrayResponse* response) override {
        vector<int> arr(request->array().begin(), request->array().end());
        
        quickSort(arr, 0, arr.size() - 1);
    
        for (int value : arr) {
            response->add_array(value);
        }
        return grpc::Status::OK;
    }
    
    grpc::Status FindMinValue(grpc::ServerContext* context, const ArrayRequest* request, MinMaxResponse* response) override {
        int minValue = *min_element(request->array().begin(), request->array().end());
        response->set_value(minValue);
        return grpc::Status::OK;
    }
    
    grpc::Status FindMaxValue(grpc::ServerContext* context, const ArrayRequest* request, MinMaxResponse* response) override {
        int maxValue = *max_element(request->array().begin(), request->array().end());
        response->set_value(maxValue);
        return grpc::Status::OK;
    }
    
private:
    void quickSort(vector<int>& arr, int low, int high) {
        if (low < high) {
            int pivot = partition(arr, low, high);
            quickSort(arr, low, pivot - 1);
            quickSort(arr, pivot + 1, high);
        }
    }

    int partition(vector<int>& arr, int low, int high) {
        int pivot = arr[high];
        int i = low - 1;
        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return i + 1;
    }
};

int main() {
    grpc::ServerBuilder builder;
    builder.AddListeningPort("0.0.0.0:50051", grpc::InsecureServerCredentials());

    MatrixServiceImpl service;
    builder.RegisterService(&service);

    unique_ptr<grpc::Server> server = builder.BuildAndStart();
    cout << "Server started on port 50051" << endl;
    
    server->Wait();
    
    return 0;
}

