// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/policy/sofa_pbrpc_meta.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "brpc/policy/sofa_pbrpc_meta.pb.h"

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

namespace brpc {
namespace policy {

namespace {

const ::google::protobuf::Descriptor* SofaRpcMeta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  SofaRpcMeta_reflection_ = NULL;
const ::google::protobuf::EnumDescriptor* SofaRpcMeta_Type_descriptor_ = NULL;
const ::google::protobuf::EnumDescriptor* SofaCompressType_descriptor_ = NULL;

}  // namespace


void protobuf_AssignDesc_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto() {
  protobuf_AddDesc_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "brpc/policy/sofa_pbrpc_meta.proto");
  GOOGLE_CHECK(file != NULL);
  SofaRpcMeta_descriptor_ = file->message_type(0);
  static const int SofaRpcMeta_offsets_[8] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SofaRpcMeta, type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SofaRpcMeta, sequence_id_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SofaRpcMeta, method_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SofaRpcMeta, failed_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SofaRpcMeta, error_code_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SofaRpcMeta, reason_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SofaRpcMeta, compress_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SofaRpcMeta, expected_response_compress_type_),
  };
  SofaRpcMeta_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      SofaRpcMeta_descriptor_,
      SofaRpcMeta::default_instance_,
      SofaRpcMeta_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SofaRpcMeta, _has_bits_[0]),
      -1,
      -1,
      sizeof(SofaRpcMeta),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(SofaRpcMeta, _internal_metadata_),
      -1);
  SofaRpcMeta_Type_descriptor_ = SofaRpcMeta_descriptor_->enum_type(0);
  SofaCompressType_descriptor_ = file->enum_type(0);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      SofaRpcMeta_descriptor_, &SofaRpcMeta::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto() {
  delete SofaRpcMeta::default_instance_;
  delete SofaRpcMeta_reflection_;
}

void protobuf_AddDesc_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n!brpc/policy/sofa_pbrpc_meta.proto\022\013brp"
    "c.policy\"\271\002\n\013SofaRpcMeta\022+\n\004type\030\001 \002(\0162\035"
    ".brpc.policy.SofaRpcMeta.Type\022\023\n\013sequenc"
    "e_id\030\002 \002(\004\022\016\n\006method\030d \001(\t\022\017\n\006failed\030\310\001 "
    "\001(\010\022\023\n\nerror_code\030\311\001 \001(\005\022\017\n\006reason\030\312\001 \001("
    "\t\0225\n\rcompress_type\030\254\002 \001(\0162\035.brpc.policy."
    "SofaCompressType\022G\n\037expected_response_co"
    "mpress_type\030\255\002 \001(\0162\035.brpc.policy.SofaCom"
    "pressType\"!\n\004Type\022\013\n\007REQUEST\020\000\022\014\n\010RESPON"
    "SE\020\001*\244\001\n\020SofaCompressType\022\033\n\027SOFA_COMPRE"
    "SS_TYPE_NONE\020\000\022\033\n\027SOFA_COMPRESS_TYPE_GZI"
    "P\020\001\022\033\n\027SOFA_COMPRESS_TYPE_ZLIB\020\002\022\035\n\031SOFA"
    "_COMPRESS_TYPE_SNAPPY\020\003\022\032\n\026SOFA_COMPRESS"
    "_TYPE_LZ4\020\004B\037\n\017com.brpc.policyB\014SofaRpcP"
    "roto", 564);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "brpc/policy/sofa_pbrpc_meta.proto", &protobuf_RegisterTypes);
  SofaRpcMeta::default_instance_ = new SofaRpcMeta();
  SofaRpcMeta::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto {
  StaticDescriptorInitializer_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto() {
    protobuf_AddDesc_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto();
  }
} static_descriptor_initializer_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto_;
const ::google::protobuf::EnumDescriptor* SofaCompressType_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SofaCompressType_descriptor_;
}
bool SofaCompressType_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
      return true;
    default:
      return false;
  }
}


// ===================================================================

const ::google::protobuf::EnumDescriptor* SofaRpcMeta_Type_descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SofaRpcMeta_Type_descriptor_;
}
bool SofaRpcMeta_Type_IsValid(int value) {
  switch(value) {
    case 0:
    case 1:
      return true;
    default:
      return false;
  }
}

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const SofaRpcMeta_Type SofaRpcMeta::REQUEST;
const SofaRpcMeta_Type SofaRpcMeta::RESPONSE;
const SofaRpcMeta_Type SofaRpcMeta::Type_MIN;
const SofaRpcMeta_Type SofaRpcMeta::Type_MAX;
const int SofaRpcMeta::Type_ARRAYSIZE;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900
#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int SofaRpcMeta::kTypeFieldNumber;
const int SofaRpcMeta::kSequenceIdFieldNumber;
const int SofaRpcMeta::kMethodFieldNumber;
const int SofaRpcMeta::kFailedFieldNumber;
const int SofaRpcMeta::kErrorCodeFieldNumber;
const int SofaRpcMeta::kReasonFieldNumber;
const int SofaRpcMeta::kCompressTypeFieldNumber;
const int SofaRpcMeta::kExpectedResponseCompressTypeFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

SofaRpcMeta::SofaRpcMeta()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:brpc.policy.SofaRpcMeta)
}

void SofaRpcMeta::InitAsDefaultInstance() {
}

SofaRpcMeta::SofaRpcMeta(const SofaRpcMeta& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:brpc.policy.SofaRpcMeta)
}

void SofaRpcMeta::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  type_ = 0;
  sequence_id_ = GOOGLE_ULONGLONG(0);
  method_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  failed_ = false;
  error_code_ = 0;
  reason_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  compress_type_ = 0;
  expected_response_compress_type_ = 0;
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

SofaRpcMeta::~SofaRpcMeta() {
  // @@protoc_insertion_point(destructor:brpc.policy.SofaRpcMeta)
  SharedDtor();
}

void SofaRpcMeta::SharedDtor() {
  method_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  reason_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void SofaRpcMeta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* SofaRpcMeta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return SofaRpcMeta_descriptor_;
}

const SofaRpcMeta& SofaRpcMeta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_brpc_2fpolicy_2fsofa_5fpbrpc_5fmeta_2eproto();
  return *default_instance_;
}

SofaRpcMeta* SofaRpcMeta::default_instance_ = NULL;

SofaRpcMeta* SofaRpcMeta::New(::google::protobuf::Arena* arena) const {
  SofaRpcMeta* n = new SofaRpcMeta;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void SofaRpcMeta::Clear() {
// @@protoc_insertion_point(message_clear_start:brpc.policy.SofaRpcMeta)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(SofaRpcMeta, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<SofaRpcMeta*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 255u) {
    ZR_(sequence_id_, failed_);
    ZR_(error_code_, expected_response_compress_type_);
    if (has_method()) {
      method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_reason()) {
      reason_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool SofaRpcMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:brpc.policy.SofaRpcMeta)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(16383);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // required .brpc.policy.SofaRpcMeta.Type type = 1;
      case 1: {
        if (tag == 8) {
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::brpc::policy::SofaRpcMeta_Type_IsValid(value)) {
            set_type(static_cast< ::brpc::policy::SofaRpcMeta_Type >(value));
          } else {
            mutable_unknown_fields()->AddVarint(1, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(16)) goto parse_sequence_id;
        break;
      }

      // required uint64 sequence_id = 2;
      case 2: {
        if (tag == 16) {
         parse_sequence_id:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::uint64, ::google::protobuf::internal::WireFormatLite::TYPE_UINT64>(
                 input, &sequence_id_)));
          set_has_sequence_id();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(802)) goto parse_method;
        break;
      }

      // optional string method = 100;
      case 100: {
        if (tag == 802) {
         parse_method:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_method()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->method().data(), this->method().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "brpc.policy.SofaRpcMeta.method");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(1600)) goto parse_failed;
        break;
      }

      // optional bool failed = 200;
      case 200: {
        if (tag == 1600) {
         parse_failed:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   bool, ::google::protobuf::internal::WireFormatLite::TYPE_BOOL>(
                 input, &failed_)));
          set_has_failed();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(1608)) goto parse_error_code;
        break;
      }

      // optional int32 error_code = 201;
      case 201: {
        if (tag == 1608) {
         parse_error_code:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &error_code_)));
          set_has_error_code();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(1618)) goto parse_reason;
        break;
      }

      // optional string reason = 202;
      case 202: {
        if (tag == 1618) {
         parse_reason:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_reason()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->reason().data(), this->reason().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "brpc.policy.SofaRpcMeta.reason");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(2400)) goto parse_compress_type;
        break;
      }

      // optional .brpc.policy.SofaCompressType compress_type = 300;
      case 300: {
        if (tag == 2400) {
         parse_compress_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::brpc::policy::SofaCompressType_IsValid(value)) {
            set_compress_type(static_cast< ::brpc::policy::SofaCompressType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(300, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(2408)) goto parse_expected_response_compress_type;
        break;
      }

      // optional .brpc.policy.SofaCompressType expected_response_compress_type = 301;
      case 301: {
        if (tag == 2408) {
         parse_expected_response_compress_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::brpc::policy::SofaCompressType_IsValid(value)) {
            set_expected_response_compress_type(static_cast< ::brpc::policy::SofaCompressType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(301, value);
          }
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
        DO_(::google::protobuf::internal::WireFormat::SkipField(
              input, tag, mutable_unknown_fields()));
        break;
      }
    }
  }
success:
  // @@protoc_insertion_point(parse_success:brpc.policy.SofaRpcMeta)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:brpc.policy.SofaRpcMeta)
  return false;
#undef DO_
}

void SofaRpcMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:brpc.policy.SofaRpcMeta)
  // required .brpc.policy.SofaRpcMeta.Type type = 1;
  if (has_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      1, this->type(), output);
  }

  // required uint64 sequence_id = 2;
  if (has_sequence_id()) {
    ::google::protobuf::internal::WireFormatLite::WriteUInt64(2, this->sequence_id(), output);
  }

  // optional string method = 100;
  if (has_method()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->method().data(), this->method().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "brpc.policy.SofaRpcMeta.method");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      100, this->method(), output);
  }

  // optional bool failed = 200;
  if (has_failed()) {
    ::google::protobuf::internal::WireFormatLite::WriteBool(200, this->failed(), output);
  }

  // optional int32 error_code = 201;
  if (has_error_code()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(201, this->error_code(), output);
  }

  // optional string reason = 202;
  if (has_reason()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->reason().data(), this->reason().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "brpc.policy.SofaRpcMeta.reason");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      202, this->reason(), output);
  }

  // optional .brpc.policy.SofaCompressType compress_type = 300;
  if (has_compress_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      300, this->compress_type(), output);
  }

  // optional .brpc.policy.SofaCompressType expected_response_compress_type = 301;
  if (has_expected_response_compress_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      301, this->expected_response_compress_type(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:brpc.policy.SofaRpcMeta)
}

::google::protobuf::uint8* SofaRpcMeta::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:brpc.policy.SofaRpcMeta)
  // required .brpc.policy.SofaRpcMeta.Type type = 1;
  if (has_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      1, this->type(), target);
  }

  // required uint64 sequence_id = 2;
  if (has_sequence_id()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteUInt64ToArray(2, this->sequence_id(), target);
  }

  // optional string method = 100;
  if (has_method()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->method().data(), this->method().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "brpc.policy.SofaRpcMeta.method");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        100, this->method(), target);
  }

  // optional bool failed = 200;
  if (has_failed()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteBoolToArray(200, this->failed(), target);
  }

  // optional int32 error_code = 201;
  if (has_error_code()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(201, this->error_code(), target);
  }

  // optional string reason = 202;
  if (has_reason()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->reason().data(), this->reason().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "brpc.policy.SofaRpcMeta.reason");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        202, this->reason(), target);
  }

  // optional .brpc.policy.SofaCompressType compress_type = 300;
  if (has_compress_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      300, this->compress_type(), target);
  }

  // optional .brpc.policy.SofaCompressType expected_response_compress_type = 301;
  if (has_expected_response_compress_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      301, this->expected_response_compress_type(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:brpc.policy.SofaRpcMeta)
  return target;
}

int SofaRpcMeta::RequiredFieldsByteSizeFallback() const {
// @@protoc_insertion_point(required_fields_byte_size_fallback_start:brpc.policy.SofaRpcMeta)
  int total_size = 0;

  if (has_type()) {
    // required .brpc.policy.SofaRpcMeta.Type type = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());
  }

  if (has_sequence_id()) {
    // required uint64 sequence_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->sequence_id());
  }

  return total_size;
}
int SofaRpcMeta::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:brpc.policy.SofaRpcMeta)
  int total_size = 0;

  if (((_has_bits_[0] & 0x00000003) ^ 0x00000003) == 0) {  // All required fields are present.
    // required .brpc.policy.SofaRpcMeta.Type type = 1;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::EnumSize(this->type());

    // required uint64 sequence_id = 2;
    total_size += 1 +
      ::google::protobuf::internal::WireFormatLite::UInt64Size(
        this->sequence_id());

  } else {
    total_size += RequiredFieldsByteSizeFallback();
  }
  if (_has_bits_[2 / 32] & 252u) {
    // optional string method = 100;
    if (has_method()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->method());
    }

    // optional bool failed = 200;
    if (has_failed()) {
      total_size += 2 + 1;
    }

    // optional int32 error_code = 201;
    if (has_error_code()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->error_code());
    }

    // optional string reason = 202;
    if (has_reason()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->reason());
    }

    // optional .brpc.policy.SofaCompressType compress_type = 300;
    if (has_compress_type()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->compress_type());
    }

    // optional .brpc.policy.SofaCompressType expected_response_compress_type = 301;
    if (has_expected_response_compress_type()) {
      total_size += 2 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->expected_response_compress_type());
    }

  }
  if (_internal_metadata_.have_unknown_fields()) {
    total_size +=
      ::google::protobuf::internal::WireFormat::ComputeUnknownFieldsSize(
        unknown_fields());
  }
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = total_size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
  return total_size;
}

void SofaRpcMeta::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:brpc.policy.SofaRpcMeta)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const SofaRpcMeta* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const SofaRpcMeta>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:brpc.policy.SofaRpcMeta)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:brpc.policy.SofaRpcMeta)
    MergeFrom(*source);
  }
}

void SofaRpcMeta::MergeFrom(const SofaRpcMeta& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:brpc.policy.SofaRpcMeta)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_type()) {
      set_type(from.type());
    }
    if (from.has_sequence_id()) {
      set_sequence_id(from.sequence_id());
    }
    if (from.has_method()) {
      set_has_method();
      method_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.method_);
    }
    if (from.has_failed()) {
      set_failed(from.failed());
    }
    if (from.has_error_code()) {
      set_error_code(from.error_code());
    }
    if (from.has_reason()) {
      set_has_reason();
      reason_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.reason_);
    }
    if (from.has_compress_type()) {
      set_compress_type(from.compress_type());
    }
    if (from.has_expected_response_compress_type()) {
      set_expected_response_compress_type(from.expected_response_compress_type());
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void SofaRpcMeta::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:brpc.policy.SofaRpcMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void SofaRpcMeta::CopyFrom(const SofaRpcMeta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:brpc.policy.SofaRpcMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool SofaRpcMeta::IsInitialized() const {
  if ((_has_bits_[0] & 0x00000003) != 0x00000003) return false;

  return true;
}

void SofaRpcMeta::Swap(SofaRpcMeta* other) {
  if (other == this) return;
  InternalSwap(other);
}
void SofaRpcMeta::InternalSwap(SofaRpcMeta* other) {
  std::swap(type_, other->type_);
  std::swap(sequence_id_, other->sequence_id_);
  method_.Swap(&other->method_);
  std::swap(failed_, other->failed_);
  std::swap(error_code_, other->error_code_);
  reason_.Swap(&other->reason_);
  std::swap(compress_type_, other->compress_type_);
  std::swap(expected_response_compress_type_, other->expected_response_compress_type_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata SofaRpcMeta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = SofaRpcMeta_descriptor_;
  metadata.reflection = SofaRpcMeta_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// SofaRpcMeta

// required .brpc.policy.SofaRpcMeta.Type type = 1;
bool SofaRpcMeta::has_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void SofaRpcMeta::set_has_type() {
  _has_bits_[0] |= 0x00000001u;
}
void SofaRpcMeta::clear_has_type() {
  _has_bits_[0] &= ~0x00000001u;
}
void SofaRpcMeta::clear_type() {
  type_ = 0;
  clear_has_type();
}
 ::brpc::policy::SofaRpcMeta_Type SofaRpcMeta::type() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.type)
  return static_cast< ::brpc::policy::SofaRpcMeta_Type >(type_);
}
 void SofaRpcMeta::set_type(::brpc::policy::SofaRpcMeta_Type value) {
  assert(::brpc::policy::SofaRpcMeta_Type_IsValid(value));
  set_has_type();
  type_ = value;
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.type)
}

// required uint64 sequence_id = 2;
bool SofaRpcMeta::has_sequence_id() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void SofaRpcMeta::set_has_sequence_id() {
  _has_bits_[0] |= 0x00000002u;
}
void SofaRpcMeta::clear_has_sequence_id() {
  _has_bits_[0] &= ~0x00000002u;
}
void SofaRpcMeta::clear_sequence_id() {
  sequence_id_ = GOOGLE_ULONGLONG(0);
  clear_has_sequence_id();
}
 ::google::protobuf::uint64 SofaRpcMeta::sequence_id() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.sequence_id)
  return sequence_id_;
}
 void SofaRpcMeta::set_sequence_id(::google::protobuf::uint64 value) {
  set_has_sequence_id();
  sequence_id_ = value;
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.sequence_id)
}

// optional string method = 100;
bool SofaRpcMeta::has_method() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void SofaRpcMeta::set_has_method() {
  _has_bits_[0] |= 0x00000004u;
}
void SofaRpcMeta::clear_has_method() {
  _has_bits_[0] &= ~0x00000004u;
}
void SofaRpcMeta::clear_method() {
  method_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_method();
}
 const ::std::string& SofaRpcMeta::method() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.method)
  return method_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SofaRpcMeta::set_method(const ::std::string& value) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.method)
}
 void SofaRpcMeta::set_method(const char* value) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:brpc.policy.SofaRpcMeta.method)
}
 void SofaRpcMeta::set_method(const char* value, size_t size) {
  set_has_method();
  method_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:brpc.policy.SofaRpcMeta.method)
}
 ::std::string* SofaRpcMeta::mutable_method() {
  set_has_method();
  // @@protoc_insertion_point(field_mutable:brpc.policy.SofaRpcMeta.method)
  return method_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* SofaRpcMeta::release_method() {
  // @@protoc_insertion_point(field_release:brpc.policy.SofaRpcMeta.method)
  clear_has_method();
  return method_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SofaRpcMeta::set_allocated_method(::std::string* method) {
  if (method != NULL) {
    set_has_method();
  } else {
    clear_has_method();
  }
  method_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method);
  // @@protoc_insertion_point(field_set_allocated:brpc.policy.SofaRpcMeta.method)
}

// optional bool failed = 200;
bool SofaRpcMeta::has_failed() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void SofaRpcMeta::set_has_failed() {
  _has_bits_[0] |= 0x00000008u;
}
void SofaRpcMeta::clear_has_failed() {
  _has_bits_[0] &= ~0x00000008u;
}
void SofaRpcMeta::clear_failed() {
  failed_ = false;
  clear_has_failed();
}
 bool SofaRpcMeta::failed() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.failed)
  return failed_;
}
 void SofaRpcMeta::set_failed(bool value) {
  set_has_failed();
  failed_ = value;
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.failed)
}

// optional int32 error_code = 201;
bool SofaRpcMeta::has_error_code() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void SofaRpcMeta::set_has_error_code() {
  _has_bits_[0] |= 0x00000010u;
}
void SofaRpcMeta::clear_has_error_code() {
  _has_bits_[0] &= ~0x00000010u;
}
void SofaRpcMeta::clear_error_code() {
  error_code_ = 0;
  clear_has_error_code();
}
 ::google::protobuf::int32 SofaRpcMeta::error_code() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.error_code)
  return error_code_;
}
 void SofaRpcMeta::set_error_code(::google::protobuf::int32 value) {
  set_has_error_code();
  error_code_ = value;
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.error_code)
}

// optional string reason = 202;
bool SofaRpcMeta::has_reason() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void SofaRpcMeta::set_has_reason() {
  _has_bits_[0] |= 0x00000020u;
}
void SofaRpcMeta::clear_has_reason() {
  _has_bits_[0] &= ~0x00000020u;
}
void SofaRpcMeta::clear_reason() {
  reason_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_reason();
}
 const ::std::string& SofaRpcMeta::reason() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.reason)
  return reason_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SofaRpcMeta::set_reason(const ::std::string& value) {
  set_has_reason();
  reason_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.reason)
}
 void SofaRpcMeta::set_reason(const char* value) {
  set_has_reason();
  reason_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:brpc.policy.SofaRpcMeta.reason)
}
 void SofaRpcMeta::set_reason(const char* value, size_t size) {
  set_has_reason();
  reason_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:brpc.policy.SofaRpcMeta.reason)
}
 ::std::string* SofaRpcMeta::mutable_reason() {
  set_has_reason();
  // @@protoc_insertion_point(field_mutable:brpc.policy.SofaRpcMeta.reason)
  return reason_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* SofaRpcMeta::release_reason() {
  // @@protoc_insertion_point(field_release:brpc.policy.SofaRpcMeta.reason)
  clear_has_reason();
  return reason_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void SofaRpcMeta::set_allocated_reason(::std::string* reason) {
  if (reason != NULL) {
    set_has_reason();
  } else {
    clear_has_reason();
  }
  reason_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), reason);
  // @@protoc_insertion_point(field_set_allocated:brpc.policy.SofaRpcMeta.reason)
}

// optional .brpc.policy.SofaCompressType compress_type = 300;
bool SofaRpcMeta::has_compress_type() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void SofaRpcMeta::set_has_compress_type() {
  _has_bits_[0] |= 0x00000040u;
}
void SofaRpcMeta::clear_has_compress_type() {
  _has_bits_[0] &= ~0x00000040u;
}
void SofaRpcMeta::clear_compress_type() {
  compress_type_ = 0;
  clear_has_compress_type();
}
 ::brpc::policy::SofaCompressType SofaRpcMeta::compress_type() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.compress_type)
  return static_cast< ::brpc::policy::SofaCompressType >(compress_type_);
}
 void SofaRpcMeta::set_compress_type(::brpc::policy::SofaCompressType value) {
  assert(::brpc::policy::SofaCompressType_IsValid(value));
  set_has_compress_type();
  compress_type_ = value;
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.compress_type)
}

// optional .brpc.policy.SofaCompressType expected_response_compress_type = 301;
bool SofaRpcMeta::has_expected_response_compress_type() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
void SofaRpcMeta::set_has_expected_response_compress_type() {
  _has_bits_[0] |= 0x00000080u;
}
void SofaRpcMeta::clear_has_expected_response_compress_type() {
  _has_bits_[0] &= ~0x00000080u;
}
void SofaRpcMeta::clear_expected_response_compress_type() {
  expected_response_compress_type_ = 0;
  clear_has_expected_response_compress_type();
}
 ::brpc::policy::SofaCompressType SofaRpcMeta::expected_response_compress_type() const {
  // @@protoc_insertion_point(field_get:brpc.policy.SofaRpcMeta.expected_response_compress_type)
  return static_cast< ::brpc::policy::SofaCompressType >(expected_response_compress_type_);
}
 void SofaRpcMeta::set_expected_response_compress_type(::brpc::policy::SofaCompressType value) {
  assert(::brpc::policy::SofaCompressType_IsValid(value));
  set_has_expected_response_compress_type();
  expected_response_compress_type_ = value;
  // @@protoc_insertion_point(field_set:brpc.policy.SofaRpcMeta.expected_response_compress_type)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace policy
}  // namespace brpc

// @@protoc_insertion_point(global_scope)