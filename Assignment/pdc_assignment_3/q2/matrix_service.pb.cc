// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: matrix_service.proto

#include "matrix_service.pb.h"

#include <algorithm>

#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/wire_format_lite.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>

PROTOBUF_PRAGMA_INIT_SEG

namespace _pb = ::PROTOBUF_NAMESPACE_ID;
namespace _pbi = _pb::internal;

namespace matrix_service {
PROTOBUF_CONSTEXPR ArrayRequest::ArrayRequest(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.array_)*/{}
  , /*decltype(_impl_._array_cached_byte_size_)*/{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ArrayRequestDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ArrayRequestDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ArrayRequestDefaultTypeInternal() {}
  union {
    ArrayRequest _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ArrayRequestDefaultTypeInternal _ArrayRequest_default_instance_;
PROTOBUF_CONSTEXPR ArrayResponse::ArrayResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.array_)*/{}
  , /*decltype(_impl_._array_cached_byte_size_)*/{0}
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct ArrayResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR ArrayResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~ArrayResponseDefaultTypeInternal() {}
  union {
    ArrayResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 ArrayResponseDefaultTypeInternal _ArrayResponse_default_instance_;
PROTOBUF_CONSTEXPR MinMaxResponse::MinMaxResponse(
    ::_pbi::ConstantInitialized): _impl_{
    /*decltype(_impl_.value_)*/0
  , /*decltype(_impl_._cached_size_)*/{}} {}
struct MinMaxResponseDefaultTypeInternal {
  PROTOBUF_CONSTEXPR MinMaxResponseDefaultTypeInternal()
      : _instance(::_pbi::ConstantInitialized{}) {}
  ~MinMaxResponseDefaultTypeInternal() {}
  union {
    MinMaxResponse _instance;
  };
};
PROTOBUF_ATTRIBUTE_NO_DESTROY PROTOBUF_CONSTINIT PROTOBUF_ATTRIBUTE_INIT_PRIORITY1 MinMaxResponseDefaultTypeInternal _MinMaxResponse_default_instance_;
}  // namespace matrix_service
static ::_pb::Metadata file_level_metadata_matrix_5fservice_2eproto[3];
static constexpr ::_pb::EnumDescriptor const** file_level_enum_descriptors_matrix_5fservice_2eproto = nullptr;
static constexpr ::_pb::ServiceDescriptor const** file_level_service_descriptors_matrix_5fservice_2eproto = nullptr;

const uint32_t TableStruct_matrix_5fservice_2eproto::offsets[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::matrix_service::ArrayRequest, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::matrix_service::ArrayRequest, _impl_.array_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::matrix_service::ArrayResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::matrix_service::ArrayResponse, _impl_.array_),
  ~0u,  // no _has_bits_
  PROTOBUF_FIELD_OFFSET(::matrix_service::MinMaxResponse, _internal_metadata_),
  ~0u,  // no _extensions_
  ~0u,  // no _oneof_case_
  ~0u,  // no _weak_field_map_
  ~0u,  // no _inlined_string_donated_
  PROTOBUF_FIELD_OFFSET(::matrix_service::MinMaxResponse, _impl_.value_),
};
static const ::_pbi::MigrationSchema schemas[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) = {
  { 0, -1, -1, sizeof(::matrix_service::ArrayRequest)},
  { 7, -1, -1, sizeof(::matrix_service::ArrayResponse)},
  { 14, -1, -1, sizeof(::matrix_service::MinMaxResponse)},
};

static const ::_pb::Message* const file_default_instances[] = {
  &::matrix_service::_ArrayRequest_default_instance_._instance,
  &::matrix_service::_ArrayResponse_default_instance_._instance,
  &::matrix_service::_MinMaxResponse_default_instance_._instance,
};

const char descriptor_table_protodef_matrix_5fservice_2eproto[] PROTOBUF_SECTION_VARIABLE(protodesc_cold) =
  "\n\024matrix_service.proto\022\016matrix_service\"\035"
  "\n\014ArrayRequest\022\r\n\005array\030\001 \003(\005\"\036\n\rArrayRe"
  "sponse\022\r\n\005array\030\001 \003(\005\"\037\n\016MinMaxResponse\022"
  "\r\n\005value\030\001 \001(\0052\365\001\n\rMatrixService\022H\n\tSort"
  "Array\022\034.matrix_service.ArrayRequest\032\035.ma"
  "trix_service.ArrayResponse\022L\n\014FindMinVal"
  "ue\022\034.matrix_service.ArrayRequest\032\036.matri"
  "x_service.MinMaxResponse\022L\n\014FindMaxValue"
  "\022\034.matrix_service.ArrayRequest\032\036.matrix_"
  "service.MinMaxResponseb\006proto3"
  ;
static ::_pbi::once_flag descriptor_table_matrix_5fservice_2eproto_once;
const ::_pbi::DescriptorTable descriptor_table_matrix_5fservice_2eproto = {
    false, false, 390, descriptor_table_protodef_matrix_5fservice_2eproto,
    "matrix_service.proto",
    &descriptor_table_matrix_5fservice_2eproto_once, nullptr, 0, 3,
    schemas, file_default_instances, TableStruct_matrix_5fservice_2eproto::offsets,
    file_level_metadata_matrix_5fservice_2eproto, file_level_enum_descriptors_matrix_5fservice_2eproto,
    file_level_service_descriptors_matrix_5fservice_2eproto,
};
PROTOBUF_ATTRIBUTE_WEAK const ::_pbi::DescriptorTable* descriptor_table_matrix_5fservice_2eproto_getter() {
  return &descriptor_table_matrix_5fservice_2eproto;
}

// Force running AddDescriptors() at dynamic initialization time.
PROTOBUF_ATTRIBUTE_INIT_PRIORITY2 static ::_pbi::AddDescriptorsRunner dynamic_init_dummy_matrix_5fservice_2eproto(&descriptor_table_matrix_5fservice_2eproto);
namespace matrix_service {

// ===================================================================

class ArrayRequest::_Internal {
 public:
};

ArrayRequest::ArrayRequest(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:matrix_service.ArrayRequest)
}
ArrayRequest::ArrayRequest(const ArrayRequest& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ArrayRequest* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.array_){from._impl_.array_}
    , /*decltype(_impl_._array_cached_byte_size_)*/{0}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:matrix_service.ArrayRequest)
}

inline void ArrayRequest::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.array_){arena}
    , /*decltype(_impl_._array_cached_byte_size_)*/{0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ArrayRequest::~ArrayRequest() {
  // @@protoc_insertion_point(destructor:matrix_service.ArrayRequest)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ArrayRequest::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.array_.~RepeatedField();
}

void ArrayRequest::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ArrayRequest::Clear() {
// @@protoc_insertion_point(message_clear_start:matrix_service.ArrayRequest)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.array_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ArrayRequest::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated int32 array = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_array(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 8) {
          _internal_add_array(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ArrayRequest::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:matrix_service.ArrayRequest)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 array = 1;
  {
    int byte_size = _impl_._array_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          1, _internal_array(), byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:matrix_service.ArrayRequest)
  return target;
}

size_t ArrayRequest::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:matrix_service.ArrayRequest)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 array = 1;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.array_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._array_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ArrayRequest::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ArrayRequest::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ArrayRequest::GetClassData() const { return &_class_data_; }


void ArrayRequest::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ArrayRequest*>(&to_msg);
  auto& from = static_cast<const ArrayRequest&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:matrix_service.ArrayRequest)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.array_.MergeFrom(from._impl_.array_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ArrayRequest::CopyFrom(const ArrayRequest& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:matrix_service.ArrayRequest)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArrayRequest::IsInitialized() const {
  return true;
}

void ArrayRequest::InternalSwap(ArrayRequest* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.array_.InternalSwap(&other->_impl_.array_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ArrayRequest::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_matrix_5fservice_2eproto_getter, &descriptor_table_matrix_5fservice_2eproto_once,
      file_level_metadata_matrix_5fservice_2eproto[0]);
}

// ===================================================================

class ArrayResponse::_Internal {
 public:
};

ArrayResponse::ArrayResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:matrix_service.ArrayResponse)
}
ArrayResponse::ArrayResponse(const ArrayResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  ArrayResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.array_){from._impl_.array_}
    , /*decltype(_impl_._array_cached_byte_size_)*/{0}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  // @@protoc_insertion_point(copy_constructor:matrix_service.ArrayResponse)
}

inline void ArrayResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.array_){arena}
    , /*decltype(_impl_._array_cached_byte_size_)*/{0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

ArrayResponse::~ArrayResponse() {
  // @@protoc_insertion_point(destructor:matrix_service.ArrayResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void ArrayResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
  _impl_.array_.~RepeatedField();
}

void ArrayResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void ArrayResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:matrix_service.ArrayResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.array_.Clear();
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* ArrayResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // repeated int32 array = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 10)) {
          ptr = ::PROTOBUF_NAMESPACE_ID::internal::PackedInt32Parser(_internal_mutable_array(), ptr, ctx);
          CHK_(ptr);
        } else if (static_cast<uint8_t>(tag) == 8) {
          _internal_add_array(::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr));
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* ArrayResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:matrix_service.ArrayResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // repeated int32 array = 1;
  {
    int byte_size = _impl_._array_cached_byte_size_.load(std::memory_order_relaxed);
    if (byte_size > 0) {
      target = stream->WriteInt32Packed(
          1, _internal_array(), byte_size, target);
    }
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:matrix_service.ArrayResponse)
  return target;
}

size_t ArrayResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:matrix_service.ArrayResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // repeated int32 array = 1;
  {
    size_t data_size = ::_pbi::WireFormatLite::
      Int32Size(this->_impl_.array_);
    if (data_size > 0) {
      total_size += 1 +
        ::_pbi::WireFormatLite::Int32Size(static_cast<int32_t>(data_size));
    }
    int cached_size = ::_pbi::ToCachedSize(data_size);
    _impl_._array_cached_byte_size_.store(cached_size,
                                    std::memory_order_relaxed);
    total_size += data_size;
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData ArrayResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    ArrayResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*ArrayResponse::GetClassData() const { return &_class_data_; }


void ArrayResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<ArrayResponse*>(&to_msg);
  auto& from = static_cast<const ArrayResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:matrix_service.ArrayResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  _this->_impl_.array_.MergeFrom(from._impl_.array_);
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void ArrayResponse::CopyFrom(const ArrayResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:matrix_service.ArrayResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool ArrayResponse::IsInitialized() const {
  return true;
}

void ArrayResponse::InternalSwap(ArrayResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  _impl_.array_.InternalSwap(&other->_impl_.array_);
}

::PROTOBUF_NAMESPACE_ID::Metadata ArrayResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_matrix_5fservice_2eproto_getter, &descriptor_table_matrix_5fservice_2eproto_once,
      file_level_metadata_matrix_5fservice_2eproto[1]);
}

// ===================================================================

class MinMaxResponse::_Internal {
 public:
};

MinMaxResponse::MinMaxResponse(::PROTOBUF_NAMESPACE_ID::Arena* arena,
                         bool is_message_owned)
  : ::PROTOBUF_NAMESPACE_ID::Message(arena, is_message_owned) {
  SharedCtor(arena, is_message_owned);
  // @@protoc_insertion_point(arena_constructor:matrix_service.MinMaxResponse)
}
MinMaxResponse::MinMaxResponse(const MinMaxResponse& from)
  : ::PROTOBUF_NAMESPACE_ID::Message() {
  MinMaxResponse* const _this = this; (void)_this;
  new (&_impl_) Impl_{
      decltype(_impl_.value_){}
    , /*decltype(_impl_._cached_size_)*/{}};

  _internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
  _this->_impl_.value_ = from._impl_.value_;
  // @@protoc_insertion_point(copy_constructor:matrix_service.MinMaxResponse)
}

inline void MinMaxResponse::SharedCtor(
    ::_pb::Arena* arena, bool is_message_owned) {
  (void)arena;
  (void)is_message_owned;
  new (&_impl_) Impl_{
      decltype(_impl_.value_){0}
    , /*decltype(_impl_._cached_size_)*/{}
  };
}

MinMaxResponse::~MinMaxResponse() {
  // @@protoc_insertion_point(destructor:matrix_service.MinMaxResponse)
  if (auto *arena = _internal_metadata_.DeleteReturnArena<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>()) {
  (void)arena;
    return;
  }
  SharedDtor();
}

inline void MinMaxResponse::SharedDtor() {
  GOOGLE_DCHECK(GetArenaForAllocation() == nullptr);
}

void MinMaxResponse::SetCachedSize(int size) const {
  _impl_._cached_size_.Set(size);
}

void MinMaxResponse::Clear() {
// @@protoc_insertion_point(message_clear_start:matrix_service.MinMaxResponse)
  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  _impl_.value_ = 0;
  _internal_metadata_.Clear<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>();
}

const char* MinMaxResponse::_InternalParse(const char* ptr, ::_pbi::ParseContext* ctx) {
#define CHK_(x) if (PROTOBUF_PREDICT_FALSE(!(x))) goto failure
  while (!ctx->Done(&ptr)) {
    uint32_t tag;
    ptr = ::_pbi::ReadTag(ptr, &tag);
    switch (tag >> 3) {
      // int32 value = 1;
      case 1:
        if (PROTOBUF_PREDICT_TRUE(static_cast<uint8_t>(tag) == 8)) {
          _impl_.value_ = ::PROTOBUF_NAMESPACE_ID::internal::ReadVarint32(&ptr);
          CHK_(ptr);
        } else
          goto handle_unusual;
        continue;
      default:
        goto handle_unusual;
    }  // switch
  handle_unusual:
    if ((tag == 0) || ((tag & 7) == 4)) {
      CHK_(ptr);
      ctx->SetLastTag(tag);
      goto message_done;
    }
    ptr = UnknownFieldParse(
        tag,
        _internal_metadata_.mutable_unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(),
        ptr, ctx);
    CHK_(ptr != nullptr);
  }  // while
message_done:
  return ptr;
failure:
  ptr = nullptr;
  goto message_done;
#undef CHK_
}

uint8_t* MinMaxResponse::_InternalSerialize(
    uint8_t* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const {
  // @@protoc_insertion_point(serialize_to_array_start:matrix_service.MinMaxResponse)
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  // int32 value = 1;
  if (this->_internal_value() != 0) {
    target = stream->EnsureSpace(target);
    target = ::_pbi::WireFormatLite::WriteInt32ToArray(1, this->_internal_value(), target);
  }

  if (PROTOBUF_PREDICT_FALSE(_internal_metadata_.have_unknown_fields())) {
    target = ::_pbi::WireFormat::InternalSerializeUnknownFieldsToArray(
        _internal_metadata_.unknown_fields<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(::PROTOBUF_NAMESPACE_ID::UnknownFieldSet::default_instance), target, stream);
  }
  // @@protoc_insertion_point(serialize_to_array_end:matrix_service.MinMaxResponse)
  return target;
}

size_t MinMaxResponse::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:matrix_service.MinMaxResponse)
  size_t total_size = 0;

  uint32_t cached_has_bits = 0;
  // Prevent compiler warnings about cached_has_bits being unused
  (void) cached_has_bits;

  // int32 value = 1;
  if (this->_internal_value() != 0) {
    total_size += ::_pbi::WireFormatLite::Int32SizePlusOne(this->_internal_value());
  }

  return MaybeComputeUnknownFieldsSize(total_size, &_impl_._cached_size_);
}

const ::PROTOBUF_NAMESPACE_ID::Message::ClassData MinMaxResponse::_class_data_ = {
    ::PROTOBUF_NAMESPACE_ID::Message::CopyWithSourceCheck,
    MinMaxResponse::MergeImpl
};
const ::PROTOBUF_NAMESPACE_ID::Message::ClassData*MinMaxResponse::GetClassData() const { return &_class_data_; }


void MinMaxResponse::MergeImpl(::PROTOBUF_NAMESPACE_ID::Message& to_msg, const ::PROTOBUF_NAMESPACE_ID::Message& from_msg) {
  auto* const _this = static_cast<MinMaxResponse*>(&to_msg);
  auto& from = static_cast<const MinMaxResponse&>(from_msg);
  // @@protoc_insertion_point(class_specific_merge_from_start:matrix_service.MinMaxResponse)
  GOOGLE_DCHECK_NE(&from, _this);
  uint32_t cached_has_bits = 0;
  (void) cached_has_bits;

  if (from._internal_value() != 0) {
    _this->_internal_set_value(from._internal_value());
  }
  _this->_internal_metadata_.MergeFrom<::PROTOBUF_NAMESPACE_ID::UnknownFieldSet>(from._internal_metadata_);
}

void MinMaxResponse::CopyFrom(const MinMaxResponse& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:matrix_service.MinMaxResponse)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool MinMaxResponse::IsInitialized() const {
  return true;
}

void MinMaxResponse::InternalSwap(MinMaxResponse* other) {
  using std::swap;
  _internal_metadata_.InternalSwap(&other->_internal_metadata_);
  swap(_impl_.value_, other->_impl_.value_);
}

::PROTOBUF_NAMESPACE_ID::Metadata MinMaxResponse::GetMetadata() const {
  return ::_pbi::AssignDescriptors(
      &descriptor_table_matrix_5fservice_2eproto_getter, &descriptor_table_matrix_5fservice_2eproto_once,
      file_level_metadata_matrix_5fservice_2eproto[2]);
}

// @@protoc_insertion_point(namespace_scope)
}  // namespace matrix_service
PROTOBUF_NAMESPACE_OPEN
template<> PROTOBUF_NOINLINE ::matrix_service::ArrayRequest*
Arena::CreateMaybeMessage< ::matrix_service::ArrayRequest >(Arena* arena) {
  return Arena::CreateMessageInternal< ::matrix_service::ArrayRequest >(arena);
}
template<> PROTOBUF_NOINLINE ::matrix_service::ArrayResponse*
Arena::CreateMaybeMessage< ::matrix_service::ArrayResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::matrix_service::ArrayResponse >(arena);
}
template<> PROTOBUF_NOINLINE ::matrix_service::MinMaxResponse*
Arena::CreateMaybeMessage< ::matrix_service::MinMaxResponse >(Arena* arena) {
  return Arena::CreateMessageInternal< ::matrix_service::MinMaxResponse >(arena);
}
PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)
#include <google/protobuf/port_undef.inc>
