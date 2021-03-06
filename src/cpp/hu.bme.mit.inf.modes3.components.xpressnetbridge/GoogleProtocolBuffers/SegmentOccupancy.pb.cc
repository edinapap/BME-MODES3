// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: SegmentOccupancy.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "SegmentOccupancy.pb.h"

#include <algorithm>

#include <google/protobuf/stubs/common.h>
#include <google/protobuf/stubs/port.h>
#include <google/protobuf/stubs/once.h>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/wire_format_lite_inl.h>
#include <google/protobuf/descriptor.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/reflection_ops.h>
#include <google/protobuf/wire_format.h>
// @@protoc_insertion_point(includes)

namespace modes3 {
namespace protobuf {

namespace {

const ::google::protobuf::Descriptor* SegmentOccupancy_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SegmentOccupancy_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_SegmentOccupancy_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_SegmentOccupancy_2eproto() {
  protobuf_AddDesc_SegmentOccupancy_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "SegmentOccupancy.proto");
  GOOGLE_CHECK(file != NULL);
  SegmentOccupancy_descriptor_ = file->message_type(0);
  static const int SegmentOccupancy_offsets_[2] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SegmentOccupancy, segmentid_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SegmentOccupancy, state_),
  };
  SegmentOccupancy_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SegmentOccupancy_descriptor_,
      SegmentOccupancy::internal_default_instance(),
      SegmentOccupancy_offsets_,
      -1,
      -1,
      -1,
      sizeof(SegmentOccupancy),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SegmentOccupancy, _internal_metadata_));
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_SegmentOccupancy_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SegmentOccupancy_descriptor_, SegmentOccupancy::internal_default_instance());
}

}  // namespace

void protobuf_ShutdownFile_SegmentOccupancy_2eproto() {
  SegmentOccupancy_default_instance_.Shutdown();
  delete SegmentOccupancy_reflection_;
}

void protobuf_InitDefaults_SegmentOccupancy_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::modes3::protobuf::protobuf_InitDefaults_Enums_2eproto();
  SegmentOccupancy_default_instance_.DefaultConstruct();
  SegmentOccupancy_default_instance_.get_mutable()->InitAsDefaultInstance();
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_InitDefaults_SegmentOccupancy_2eproto_once_);
void protobuf_InitDefaults_SegmentOccupancy_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_InitDefaults_SegmentOccupancy_2eproto_once_,
                 &protobuf_InitDefaults_SegmentOccupancy_2eproto_impl);
}
void protobuf_AddDesc_SegmentOccupancy_2eproto_impl() {
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  protobuf_InitDefaults_SegmentOccupancy_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\026SegmentOccupancy.proto\022\017modes3.protobu"
    "f\032\013Enums.proto\"\\\n\020SegmentOccupancy\022\021\n\tse"
    "gmentID\030\001 \001(\r\0225\n\005state\030\002 \001(\0162&.modes3.pr"
    "otobuf.SegmentOccupancyValueB0\n,hu.bme.m"
    "it.inf.modes3.messaging.mms.messagesP\001b\006"
    "proto3", 206);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "SegmentOccupancy.proto", &protobuf_RegisterTypes);
  ::modes3::protobuf::protobuf_AddDesc_Enums_2eproto();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_SegmentOccupancy_2eproto);
}

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AddDesc_SegmentOccupancy_2eproto_once_);
void protobuf_AddDesc_SegmentOccupancy_2eproto() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AddDesc_SegmentOccupancy_2eproto_once_,
                 &protobuf_AddDesc_SegmentOccupancy_2eproto_impl);
}
// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_SegmentOccupancy_2eproto {
  StaticDescriptorInitializer_SegmentOccupancy_2eproto() {
    protobuf_AddDesc_SegmentOccupancy_2eproto();
  }
} static_descriptor_initializer_SegmentOccupancy_2eproto_;

namespace {

static void MergeFromFail(int line) GOOGLE_ATTRIBUTE_COLD GOOGLE_ATTRIBUTE_NORETURN;
static void MergeFromFail(int line) {
  ::google::protobuf::internal::MergeFromFail(__FILE__, line);
}

}  // namespace


// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SegmentOccupancy::kSegmentIDFieldNumber;
const int SegmentOccupancy::kStateFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SegmentOccupancy::SegmentOccupancy()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  if (this != internal_default_instance()) protobuf_InitDefaults_SegmentOccupancy_2eproto();
  SharedCtor();
  // @@protoc_insertion_point(constructor:modes3.protobuf.SegmentOccupancy)
}

void SegmentOccupancy::InitAsDefaultInstance() {
}

SegmentOccupancy::SegmentOccupancy(const SegmentOccupancy& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  UnsafeMergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:modes3.protobuf.SegmentOccupancy)
}

void SegmentOccupancy::SharedCtor() {
  ::memset(&segmentid_, 0, reinterpret_cast<char*>(&state_) -
    reinterpret_cast<char*>(&segmentid_) + sizeof(state_));
  _cached_size_ = 0;
}

SegmentOccupancy::~SegmentOccupancy() {
  // @@protoc_insertion_point(destructor:modes3.protobuf.SegmentOccupancy)
  SharedDtor();
}

void SegmentOccupancy::SharedDtor() {
}

void SegmentOccupancy::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SegmentOccupancy::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SegmentOccupancy_descriptor_;
}

const SegmentOccupancy& SegmentOccupancy::default_instance() {
  protobuf_InitDefaults_SegmentOccupancy_2eproto();
  return *internal_default_instance();
}

::google::protobuf::internal::ExplicitlyConstructed<SegmentOccupancy> SegmentOccupancy_default_instance_;

SegmentOccupancy* SegmentOccupancy::New(::google::protobuf::Arena* arena) const {
  SegmentOccupancy* n = new SegmentOccupancy;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SegmentOccupancy::Clear() {
// @@protoc_insertion_point(message_clear_start:modes3.protobuf.SegmentOccupancy)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(SegmentOccupancy, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<SegmentOccupancy*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&(first), 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  ZR_(segmentid_, state_);

#undef ZR_HELPER_
#undef ZR_

}

bool SegmentOccupancy::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:modes3.protobuf.SegmentOccupancy)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional uint32 segmentID = 1;
      case 1: {
        if (tag == 8) {

          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint32, ::google::protobuf::internal::WireFormatLite::TYPE_UINT32>(
                 input, &segmentid_)));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_state;
        break;
      }

      // optional .modes3.protobuf.SegmentOccupancyValue state = 2;
      case 2: {
        if (tag == 16) {
         parse_state:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          set_state(static_cast< ::modes3::protobuf::SegmentOccupancyValue >(value));
        } else {
          goto handle_unusual;
        }
        if (input->ExpectAtEnd()) goto success;
        break;
      }

      default: {
      handle_unusual:
        if (tag == 0 ||
            ::google::protobuf::internal::WireFormatLite::GetTagWireType(tag) ==
            ::google::protobuf::internal::WireFormatLite::WIRETYPE_END_GROUP) {
          goto success;
        }
        DO_(::google::protobuf::internal::WireFormatLite::SkipField(input, tag));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:modes3.protobuf.SegmentOccupancy)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:modes3.protobuf.SegmentOccupancy)
  return false;
#undef DO_
}

void SegmentOccupancy::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:modes3.protobuf.SegmentOccupancy)
  // optional uint32 segmentID = 1;
  if (this->segmentid() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt32(1, this->segmentid(), output);
  }

  // optional .modes3.protobuf.SegmentOccupancyValue state = 2;
  if (this->state() != 0) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      2, this->state(), output);
  }

  // @@protoc_insertion_point(serialize_end:modes3.protobuf.SegmentOccupancy)
}

::google::protobuf::uint8* SegmentOccupancy::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  (void)deterministic; // Unused
  // @@protoc_insertion_point(serialize_to_array_start:modes3.protobuf.SegmentOccupancy)
  // optional uint32 segmentID = 1;
  if (this->segmentid() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt32ToArray(1, this->segmentid(), target);
  }

  // optional .modes3.protobuf.SegmentOccupancyValue state = 2;
  if (this->state() != 0) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      2, this->state(), target);
  }

  // @@protoc_insertion_point(serialize_to_array_end:modes3.protobuf.SegmentOccupancy)
  return target;
}

size_t SegmentOccupancy::ByteSizeLong() const {
// @@protoc_insertion_point(message_byte_size_start:modes3.protobuf.SegmentOccupancy)
  size_t total_size = 0;

  // optional uint32 segmentID = 1;
  if (this->segmentid() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt32Size(
        this->segmentid());
  }

  // optional .modes3.protobuf.SegmentOccupancyValue state = 2;
  if (this->state() != 0) {
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->state());
  }

  int cached_size = ::google::protobuf::internal::ToCachedSize(total_size);
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = cached_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SegmentOccupancy::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:modes3.protobuf.SegmentOccupancy)
  if (GOOGLE_PREDICT_FALSE(&from == this)) MergeFromFail(__LINE__);
  const SegmentOccupancy* source =
      ::google::protobuf::internal::DynamicCastToGenerated<const SegmentOccupancy>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:modes3.protobuf.SegmentOccupancy)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:modes3.protobuf.SegmentOccupancy)
    UnsafeMergeFrom(*source);
  }
}

void SegmentOccupancy::MergeFrom(const SegmentOccupancy& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:modes3.protobuf.SegmentOccupancy)
  if (GOOGLE_PREDICT_TRUE(&from != this)) {
    UnsafeMergeFrom(from);
  } else {
    MergeFromFail(__LINE__);
  }
}

void SegmentOccupancy::UnsafeMergeFrom(const SegmentOccupancy& from) {
  GOOGLE_DCHECK(&from != this);
  if (from.segmentid() != 0) {
    set_segmentid(from.segmentid());
  }
  if (from.state() != 0) {
    set_state(from.state());
  }
}

void SegmentOccupancy::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:modes3.protobuf.SegmentOccupancy)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SegmentOccupancy::CopyFrom(const SegmentOccupancy& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:modes3.protobuf.SegmentOccupancy)
  if (&from == this) return;
  Clear();
  UnsafeMergeFrom(from);
}

bool SegmentOccupancy::IsInitialized() const {

  return true;
}

void SegmentOccupancy::Swap(SegmentOccupancy* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SegmentOccupancy::InternalSwap(SegmentOccupancy* other) {
  std::swap(segmentid_, other->segmentid_);
  std::swap(state_, other->state_);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SegmentOccupancy::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SegmentOccupancy_descriptor_;
  metadata.reflection = SegmentOccupancy_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SegmentOccupancy

// optional uint32 segmentID = 1;
void SegmentOccupancy::clear_segmentid() {
  segmentid_ = 0u;
}
::google::protobuf::uint32 SegmentOccupancy::segmentid() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.SegmentOccupancy.segmentID)
  return segmentid_;
}
void SegmentOccupancy::set_segmentid(::google::protobuf::uint32 value) {
  
  segmentid_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.SegmentOccupancy.segmentID)
}

// optional .modes3.protobuf.SegmentOccupancyValue state = 2;
void SegmentOccupancy::clear_state() {
  state_ = 0;
}
::modes3::protobuf::SegmentOccupancyValue SegmentOccupancy::state() const {
  // @@protoc_insertion_point(field_get:modes3.protobuf.SegmentOccupancy.state)
  return static_cast< ::modes3::protobuf::SegmentOccupancyValue >(state_);
}
void SegmentOccupancy::set_state(::modes3::protobuf::SegmentOccupancyValue value) {
  
  state_ = value;
  // @@protoc_insertion_point(field_set:modes3.protobuf.SegmentOccupancy.state)
}

inline const SegmentOccupancy* SegmentOccupancy::internal_default_instance() {
  return &SegmentOccupancy_default_instance_.get();
}
#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace protobuf
}  // namespace modes3

// @@protoc_insertion_point(global_scope)
