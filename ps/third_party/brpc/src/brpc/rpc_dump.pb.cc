// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: brpc/rpc_dump.proto

#define INTERNAL_SUPPRESS_PROTOBUF_FIELD_DEPRECATION
#include "brpc/rpc_dump.pb.h"

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

namespace {

const ::google::protobuf::Descriptor* RpcDumpMeta_descriptor_ = NULL;
const ::google::protobuf::internal::GeneratedMessageReflection*
  RpcDumpMeta_reflection_ = NULL;

}  // namespace


void protobuf_AssignDesc_brpc_2frpc_5fdump_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AssignDesc_brpc_2frpc_5fdump_2eproto() {
  protobuf_AddDesc_brpc_2frpc_5fdump_2eproto();
  const ::google::protobuf::FileDescriptor* file =
    ::google::protobuf::DescriptorPool::generated_pool()->FindFileByName(
      "brpc/rpc_dump.proto");
  GOOGLE_CHECK(file != NULL);
  RpcDumpMeta_descriptor_ = file->message_type(0);
  static const int RpcDumpMeta_offsets_[7] = {
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, service_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, method_name_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, method_index_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, compress_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, protocol_type_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, attachment_size_),
    GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, authentication_data_),
  };
  RpcDumpMeta_reflection_ =
    ::google::protobuf::internal::GeneratedMessageReflection::NewGeneratedMessageReflection(
      RpcDumpMeta_descriptor_,
      RpcDumpMeta::default_instance_,
      RpcDumpMeta_offsets_,
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, _has_bits_[0]),
      -1,
      -1,
      sizeof(RpcDumpMeta),
      GOOGLE_PROTOBUF_GENERATED_MESSAGE_FIELD_OFFSET(RpcDumpMeta, _internal_metadata_),
      -1);
}

namespace {

GOOGLE_PROTOBUF_DECLARE_ONCE(protobuf_AssignDescriptors_once_);
inline void protobuf_AssignDescriptorsOnce() {
  ::google::protobuf::GoogleOnceInit(&protobuf_AssignDescriptors_once_,
                 &protobuf_AssignDesc_brpc_2frpc_5fdump_2eproto);
}

void protobuf_RegisterTypes(const ::std::string&) GOOGLE_ATTRIBUTE_COLD;
void protobuf_RegisterTypes(const ::std::string&) {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedMessage(
      RpcDumpMeta_descriptor_, &RpcDumpMeta::default_instance());
}

}  // namespace

void protobuf_ShutdownFile_brpc_2frpc_5fdump_2eproto() {
  delete RpcDumpMeta::default_instance_;
  delete RpcDumpMeta_reflection_;
}

void protobuf_AddDesc_brpc_2frpc_5fdump_2eproto() GOOGLE_ATTRIBUTE_COLD;
void protobuf_AddDesc_brpc_2frpc_5fdump_2eproto() {
  static bool already_here = false;
  if (already_here) return;
  already_here = true;
  GOOGLE_PROTOBUF_VERIFY_VERSION;

  ::brpc::protobuf_AddDesc_brpc_2foptions_2eproto();
  ::google::protobuf::DescriptorPool::InternalAddGeneratedFile(
    "\n\023brpc/rpc_dump.proto\022\004brpc\032\022brpc/option"
    "s.proto\"\332\001\n\013RpcDumpMeta\022\024\n\014service_name\030"
    "\001 \001(\t\022\023\n\013method_name\030\002 \001(\t\022\024\n\014method_ind"
    "ex\030\003 \001(\005\022)\n\rcompress_type\030\004 \001(\0162\022.brpc.C"
    "ompressType\022)\n\rprotocol_type\030\005 \001(\0162\022.brp"
    "c.ProtocolType\022\027\n\017attachment_size\030\006 \001(\005\022"
    "\033\n\023authentication_data\030\007 \001(\014", 268);
  ::google::protobuf::MessageFactory::InternalRegisterGeneratedFile(
    "brpc/rpc_dump.proto", &protobuf_RegisterTypes);
  RpcDumpMeta::default_instance_ = new RpcDumpMeta();
  RpcDumpMeta::default_instance_->InitAsDefaultInstance();
  ::google::protobuf::internal::OnShutdown(&protobuf_ShutdownFile_brpc_2frpc_5fdump_2eproto);
}

// Force AddDescriptors() to be called at static initialization time.
struct StaticDescriptorInitializer_brpc_2frpc_5fdump_2eproto {
  StaticDescriptorInitializer_brpc_2frpc_5fdump_2eproto() {
    protobuf_AddDesc_brpc_2frpc_5fdump_2eproto();
  }
} static_descriptor_initializer_brpc_2frpc_5fdump_2eproto_;

// ===================================================================

#if !defined(_MSC_VER) || _MSC_VER >= 1900
const int RpcDumpMeta::kServiceNameFieldNumber;
const int RpcDumpMeta::kMethodNameFieldNumber;
const int RpcDumpMeta::kMethodIndexFieldNumber;
const int RpcDumpMeta::kCompressTypeFieldNumber;
const int RpcDumpMeta::kProtocolTypeFieldNumber;
const int RpcDumpMeta::kAttachmentSizeFieldNumber;
const int RpcDumpMeta::kAuthenticationDataFieldNumber;
#endif  // !defined(_MSC_VER) || _MSC_VER >= 1900

RpcDumpMeta::RpcDumpMeta()
  : ::google::protobuf::Message(), _internal_metadata_(NULL) {
  SharedCtor();
  // @@protoc_insertion_point(constructor:brpc.RpcDumpMeta)
}

void RpcDumpMeta::InitAsDefaultInstance() {
}

RpcDumpMeta::RpcDumpMeta(const RpcDumpMeta& from)
  : ::google::protobuf::Message(),
    _internal_metadata_(NULL) {
  SharedCtor();
  MergeFrom(from);
  // @@protoc_insertion_point(copy_constructor:brpc.RpcDumpMeta)
}

void RpcDumpMeta::SharedCtor() {
  ::google::protobuf::internal::GetEmptyString();
  _cached_size_ = 0;
  service_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  method_name_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  method_index_ = 0;
  compress_type_ = 0;
  protocol_type_ = 0;
  attachment_size_ = 0;
  authentication_data_.UnsafeSetDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  ::memset(_has_bits_, 0, sizeof(_has_bits_));
}

RpcDumpMeta::~RpcDumpMeta() {
  // @@protoc_insertion_point(destructor:brpc.RpcDumpMeta)
  SharedDtor();
}

void RpcDumpMeta::SharedDtor() {
  service_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  method_name_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  authentication_data_.DestroyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  if (this != default_instance_) {
  }
}

void RpcDumpMeta::SetCachedSize(int size) const {
  GOOGLE_SAFE_CONCURRENT_WRITES_BEGIN();
  _cached_size_ = size;
  GOOGLE_SAFE_CONCURRENT_WRITES_END();
}
const ::google::protobuf::Descriptor* RpcDumpMeta::descriptor() {
  protobuf_AssignDescriptorsOnce();
  return RpcDumpMeta_descriptor_;
}

const RpcDumpMeta& RpcDumpMeta::default_instance() {
  if (default_instance_ == NULL) protobuf_AddDesc_brpc_2frpc_5fdump_2eproto();
  return *default_instance_;
}

RpcDumpMeta* RpcDumpMeta::default_instance_ = NULL;

RpcDumpMeta* RpcDumpMeta::New(::google::protobuf::Arena* arena) const {
  RpcDumpMeta* n = new RpcDumpMeta;
  if (arena != NULL) {
    arena->Own(n);
  }
  return n;
}

void RpcDumpMeta::Clear() {
// @@protoc_insertion_point(message_clear_start:brpc.RpcDumpMeta)
#if defined(__clang__)
#define ZR_HELPER_(f) \
  _Pragma("clang diagnostic push") \
  _Pragma("clang diagnostic ignored \"-Winvalid-offsetof\"") \
  __builtin_offsetof(RpcDumpMeta, f) \
  _Pragma("clang diagnostic pop")
#else
#define ZR_HELPER_(f) reinterpret_cast<char*>(\
  &reinterpret_cast<RpcDumpMeta*>(16)->f)
#endif

#define ZR_(first, last) do {\
  ::memset(&first, 0,\
           ZR_HELPER_(last) - ZR_HELPER_(first) + sizeof(last));\
} while (0)

  if (_has_bits_[0 / 32] & 127u) {
    ZR_(method_index_, attachment_size_);
    if (has_service_name()) {
      service_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_method_name()) {
      method_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
    if (has_authentication_data()) {
      authentication_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
    }
  }

#undef ZR_HELPER_
#undef ZR_

  ::memset(_has_bits_, 0, sizeof(_has_bits_));
  if (_internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->Clear();
  }
}

bool RpcDumpMeta::MergePartialFromCodedStream(
    ::google::protobuf::io::CodedInputStream* input) {
#define DO_(EXPRESSION) if (!GOOGLE_PREDICT_TRUE(EXPRESSION)) goto failure
  ::google::protobuf::uint32 tag;
  // @@protoc_insertion_point(parse_start:brpc.RpcDumpMeta)
  for (;;) {
    ::std::pair< ::google::protobuf::uint32, bool> p = input->ReadTagWithCutoff(127);
    tag = p.first;
    if (!p.second) goto handle_unusual;
    switch (::google::protobuf::internal::WireFormatLite::GetTagFieldNumber(tag)) {
      // optional string service_name = 1;
      case 1: {
        if (tag == 10) {
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_service_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->service_name().data(), this->service_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "brpc.RpcDumpMeta.service_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(18)) goto parse_method_name;
        break;
      }

      // optional string method_name = 2;
      case 2: {
        if (tag == 18) {
         parse_method_name:
          DO_(::google::protobuf::internal::WireFormatLite::ReadString(
                input, this->mutable_method_name()));
          ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
            this->method_name().data(), this->method_name().length(),
            ::google::protobuf::internal::WireFormat::PARSE,
            "brpc.RpcDumpMeta.method_name");
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(24)) goto parse_method_index;
        break;
      }

      // optional int32 method_index = 3;
      case 3: {
        if (tag == 24) {
         parse_method_index:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &method_index_)));
          set_has_method_index();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(32)) goto parse_compress_type;
        break;
      }

      // optional .brpc.CompressType compress_type = 4;
      case 4: {
        if (tag == 32) {
         parse_compress_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::brpc::CompressType_IsValid(value)) {
            set_compress_type(static_cast< ::brpc::CompressType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(4, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(40)) goto parse_protocol_type;
        break;
      }

      // optional .brpc.ProtocolType protocol_type = 5;
      case 5: {
        if (tag == 40) {
         parse_protocol_type:
          int value;
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   int, ::google::protobuf::internal::WireFormatLite::TYPE_ENUM>(
                 input, &value)));
          if (::brpc::ProtocolType_IsValid(value)) {
            set_protocol_type(static_cast< ::brpc::ProtocolType >(value));
          } else {
            mutable_unknown_fields()->AddVarint(5, value);
          }
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(48)) goto parse_attachment_size;
        break;
      }

      // optional int32 attachment_size = 6;
      case 6: {
        if (tag == 48) {
         parse_attachment_size:
          DO_((::google::protobuf::internal::WireFormatLite::ReadPrimitive<
                   ::google::protobuf::int32, ::google::protobuf::internal::WireFormatLite::TYPE_INT32>(
                 input, &attachment_size_)));
          set_has_attachment_size();
        } else {
          goto handle_unusual;
        }
        if (input->ExpectTag(58)) goto parse_authentication_data;
        break;
      }

      // optional bytes authentication_data = 7;
      case 7: {
        if (tag == 58) {
         parse_authentication_data:
          DO_(::google::protobuf::internal::WireFormatLite::ReadBytes(
                input, this->mutable_authentication_data()));
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
  // @@protoc_insertion_point(parse_success:brpc.RpcDumpMeta)
  return true;
failure:
  // @@protoc_insertion_point(parse_failure:brpc.RpcDumpMeta)
  return false;
#undef DO_
}

void RpcDumpMeta::SerializeWithCachedSizes(
    ::google::protobuf::io::CodedOutputStream* output) const {
  // @@protoc_insertion_point(serialize_start:brpc.RpcDumpMeta)
  // optional string service_name = 1;
  if (has_service_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->service_name().data(), this->service_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "brpc.RpcDumpMeta.service_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      1, this->service_name(), output);
  }

  // optional string method_name = 2;
  if (has_method_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->method_name().data(), this->method_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "brpc.RpcDumpMeta.method_name");
    ::google::protobuf::internal::WireFormatLite::WriteStringMaybeAliased(
      2, this->method_name(), output);
  }

  // optional int32 method_index = 3;
  if (has_method_index()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(3, this->method_index(), output);
  }

  // optional .brpc.CompressType compress_type = 4;
  if (has_compress_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      4, this->compress_type(), output);
  }

  // optional .brpc.ProtocolType protocol_type = 5;
  if (has_protocol_type()) {
    ::google::protobuf::internal::WireFormatLite::WriteEnum(
      5, this->protocol_type(), output);
  }

  // optional int32 attachment_size = 6;
  if (has_attachment_size()) {
    ::google::protobuf::internal::WireFormatLite::WriteInt32(6, this->attachment_size(), output);
  }

  // optional bytes authentication_data = 7;
  if (has_authentication_data()) {
    ::google::protobuf::internal::WireFormatLite::WriteBytesMaybeAliased(
      7, this->authentication_data(), output);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    ::google::protobuf::internal::WireFormat::SerializeUnknownFields(
        unknown_fields(), output);
  }
  // @@protoc_insertion_point(serialize_end:brpc.RpcDumpMeta)
}

::google::protobuf::uint8* RpcDumpMeta::InternalSerializeWithCachedSizesToArray(
    bool deterministic, ::google::protobuf::uint8* target) const {
  // @@protoc_insertion_point(serialize_to_array_start:brpc.RpcDumpMeta)
  // optional string service_name = 1;
  if (has_service_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->service_name().data(), this->service_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "brpc.RpcDumpMeta.service_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        1, this->service_name(), target);
  }

  // optional string method_name = 2;
  if (has_method_name()) {
    ::google::protobuf::internal::WireFormat::VerifyUTF8StringNamedField(
      this->method_name().data(), this->method_name().length(),
      ::google::protobuf::internal::WireFormat::SERIALIZE,
      "brpc.RpcDumpMeta.method_name");
    target =
      ::google::protobuf::internal::WireFormatLite::WriteStringToArray(
        2, this->method_name(), target);
  }

  // optional int32 method_index = 3;
  if (has_method_index()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(3, this->method_index(), target);
  }

  // optional .brpc.CompressType compress_type = 4;
  if (has_compress_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      4, this->compress_type(), target);
  }

  // optional .brpc.ProtocolType protocol_type = 5;
  if (has_protocol_type()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteEnumToArray(
      5, this->protocol_type(), target);
  }

  // optional int32 attachment_size = 6;
  if (has_attachment_size()) {
    target = ::google::protobuf::internal::WireFormatLite::WriteInt32ToArray(6, this->attachment_size(), target);
  }

  // optional bytes authentication_data = 7;
  if (has_authentication_data()) {
    target =
      ::google::protobuf::internal::WireFormatLite::WriteBytesToArray(
        7, this->authentication_data(), target);
  }

  if (_internal_metadata_.have_unknown_fields()) {
    target = ::google::protobuf::internal::WireFormat::SerializeUnknownFieldsToArray(
        unknown_fields(), target);
  }
  // @@protoc_insertion_point(serialize_to_array_end:brpc.RpcDumpMeta)
  return target;
}

int RpcDumpMeta::ByteSize() const {
// @@protoc_insertion_point(message_byte_size_start:brpc.RpcDumpMeta)
  int total_size = 0;

  if (_has_bits_[0 / 32] & 127u) {
    // optional string service_name = 1;
    if (has_service_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->service_name());
    }

    // optional string method_name = 2;
    if (has_method_name()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::StringSize(
          this->method_name());
    }

    // optional int32 method_index = 3;
    if (has_method_index()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->method_index());
    }

    // optional .brpc.CompressType compress_type = 4;
    if (has_compress_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->compress_type());
    }

    // optional .brpc.ProtocolType protocol_type = 5;
    if (has_protocol_type()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::EnumSize(this->protocol_type());
    }

    // optional int32 attachment_size = 6;
    if (has_attachment_size()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::Int32Size(
          this->attachment_size());
    }

    // optional bytes authentication_data = 7;
    if (has_authentication_data()) {
      total_size += 1 +
        ::google::protobuf::internal::WireFormatLite::BytesSize(
          this->authentication_data());
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

void RpcDumpMeta::MergeFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_merge_from_start:brpc.RpcDumpMeta)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  const RpcDumpMeta* source = 
      ::google::protobuf::internal::DynamicCastToGenerated<const RpcDumpMeta>(
          &from);
  if (source == NULL) {
  // @@protoc_insertion_point(generalized_merge_from_cast_fail:brpc.RpcDumpMeta)
    ::google::protobuf::internal::ReflectionOps::Merge(from, this);
  } else {
  // @@protoc_insertion_point(generalized_merge_from_cast_success:brpc.RpcDumpMeta)
    MergeFrom(*source);
  }
}

void RpcDumpMeta::MergeFrom(const RpcDumpMeta& from) {
// @@protoc_insertion_point(class_specific_merge_from_start:brpc.RpcDumpMeta)
  if (GOOGLE_PREDICT_FALSE(&from == this)) {
    ::google::protobuf::internal::MergeFromFail(__FILE__, __LINE__);
  }
  if (from._has_bits_[0 / 32] & (0xffu << (0 % 32))) {
    if (from.has_service_name()) {
      set_has_service_name();
      service_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.service_name_);
    }
    if (from.has_method_name()) {
      set_has_method_name();
      method_name_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.method_name_);
    }
    if (from.has_method_index()) {
      set_method_index(from.method_index());
    }
    if (from.has_compress_type()) {
      set_compress_type(from.compress_type());
    }
    if (from.has_protocol_type()) {
      set_protocol_type(from.protocol_type());
    }
    if (from.has_attachment_size()) {
      set_attachment_size(from.attachment_size());
    }
    if (from.has_authentication_data()) {
      set_has_authentication_data();
      authentication_data_.AssignWithDefault(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), from.authentication_data_);
    }
  }
  if (from._internal_metadata_.have_unknown_fields()) {
    mutable_unknown_fields()->MergeFrom(from.unknown_fields());
  }
}

void RpcDumpMeta::CopyFrom(const ::google::protobuf::Message& from) {
// @@protoc_insertion_point(generalized_copy_from_start:brpc.RpcDumpMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

void RpcDumpMeta::CopyFrom(const RpcDumpMeta& from) {
// @@protoc_insertion_point(class_specific_copy_from_start:brpc.RpcDumpMeta)
  if (&from == this) return;
  Clear();
  MergeFrom(from);
}

bool RpcDumpMeta::IsInitialized() const {

  return true;
}

void RpcDumpMeta::Swap(RpcDumpMeta* other) {
  if (other == this) return;
  InternalSwap(other);
}
void RpcDumpMeta::InternalSwap(RpcDumpMeta* other) {
  service_name_.Swap(&other->service_name_);
  method_name_.Swap(&other->method_name_);
  std::swap(method_index_, other->method_index_);
  std::swap(compress_type_, other->compress_type_);
  std::swap(protocol_type_, other->protocol_type_);
  std::swap(attachment_size_, other->attachment_size_);
  authentication_data_.Swap(&other->authentication_data_);
  std::swap(_has_bits_[0], other->_has_bits_[0]);
  _internal_metadata_.Swap(&other->_internal_metadata_);
  std::swap(_cached_size_, other->_cached_size_);
}

::google::protobuf::Metadata RpcDumpMeta::GetMetadata() const {
  protobuf_AssignDescriptorsOnce();
  ::google::protobuf::Metadata metadata;
  metadata.descriptor = RpcDumpMeta_descriptor_;
  metadata.reflection = RpcDumpMeta_reflection_;
  return metadata;
}

#if PROTOBUF_INLINE_NOT_IN_HEADERS
// RpcDumpMeta

// optional string service_name = 1;
bool RpcDumpMeta::has_service_name() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
void RpcDumpMeta::set_has_service_name() {
  _has_bits_[0] |= 0x00000001u;
}
void RpcDumpMeta::clear_has_service_name() {
  _has_bits_[0] &= ~0x00000001u;
}
void RpcDumpMeta::clear_service_name() {
  service_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_service_name();
}
 const ::std::string& RpcDumpMeta::service_name() const {
  // @@protoc_insertion_point(field_get:brpc.RpcDumpMeta.service_name)
  return service_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcDumpMeta::set_service_name(const ::std::string& value) {
  set_has_service_name();
  service_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:brpc.RpcDumpMeta.service_name)
}
 void RpcDumpMeta::set_service_name(const char* value) {
  set_has_service_name();
  service_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:brpc.RpcDumpMeta.service_name)
}
 void RpcDumpMeta::set_service_name(const char* value, size_t size) {
  set_has_service_name();
  service_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:brpc.RpcDumpMeta.service_name)
}
 ::std::string* RpcDumpMeta::mutable_service_name() {
  set_has_service_name();
  // @@protoc_insertion_point(field_mutable:brpc.RpcDumpMeta.service_name)
  return service_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RpcDumpMeta::release_service_name() {
  // @@protoc_insertion_point(field_release:brpc.RpcDumpMeta.service_name)
  clear_has_service_name();
  return service_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcDumpMeta::set_allocated_service_name(::std::string* service_name) {
  if (service_name != NULL) {
    set_has_service_name();
  } else {
    clear_has_service_name();
  }
  service_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), service_name);
  // @@protoc_insertion_point(field_set_allocated:brpc.RpcDumpMeta.service_name)
}

// optional string method_name = 2;
bool RpcDumpMeta::has_method_name() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
void RpcDumpMeta::set_has_method_name() {
  _has_bits_[0] |= 0x00000002u;
}
void RpcDumpMeta::clear_has_method_name() {
  _has_bits_[0] &= ~0x00000002u;
}
void RpcDumpMeta::clear_method_name() {
  method_name_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_method_name();
}
 const ::std::string& RpcDumpMeta::method_name() const {
  // @@protoc_insertion_point(field_get:brpc.RpcDumpMeta.method_name)
  return method_name_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcDumpMeta::set_method_name(const ::std::string& value) {
  set_has_method_name();
  method_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:brpc.RpcDumpMeta.method_name)
}
 void RpcDumpMeta::set_method_name(const char* value) {
  set_has_method_name();
  method_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:brpc.RpcDumpMeta.method_name)
}
 void RpcDumpMeta::set_method_name(const char* value, size_t size) {
  set_has_method_name();
  method_name_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:brpc.RpcDumpMeta.method_name)
}
 ::std::string* RpcDumpMeta::mutable_method_name() {
  set_has_method_name();
  // @@protoc_insertion_point(field_mutable:brpc.RpcDumpMeta.method_name)
  return method_name_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RpcDumpMeta::release_method_name() {
  // @@protoc_insertion_point(field_release:brpc.RpcDumpMeta.method_name)
  clear_has_method_name();
  return method_name_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcDumpMeta::set_allocated_method_name(::std::string* method_name) {
  if (method_name != NULL) {
    set_has_method_name();
  } else {
    clear_has_method_name();
  }
  method_name_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), method_name);
  // @@protoc_insertion_point(field_set_allocated:brpc.RpcDumpMeta.method_name)
}

// optional int32 method_index = 3;
bool RpcDumpMeta::has_method_index() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
void RpcDumpMeta::set_has_method_index() {
  _has_bits_[0] |= 0x00000004u;
}
void RpcDumpMeta::clear_has_method_index() {
  _has_bits_[0] &= ~0x00000004u;
}
void RpcDumpMeta::clear_method_index() {
  method_index_ = 0;
  clear_has_method_index();
}
 ::google::protobuf::int32 RpcDumpMeta::method_index() const {
  // @@protoc_insertion_point(field_get:brpc.RpcDumpMeta.method_index)
  return method_index_;
}
 void RpcDumpMeta::set_method_index(::google::protobuf::int32 value) {
  set_has_method_index();
  method_index_ = value;
  // @@protoc_insertion_point(field_set:brpc.RpcDumpMeta.method_index)
}

// optional .brpc.CompressType compress_type = 4;
bool RpcDumpMeta::has_compress_type() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
void RpcDumpMeta::set_has_compress_type() {
  _has_bits_[0] |= 0x00000008u;
}
void RpcDumpMeta::clear_has_compress_type() {
  _has_bits_[0] &= ~0x00000008u;
}
void RpcDumpMeta::clear_compress_type() {
  compress_type_ = 0;
  clear_has_compress_type();
}
 ::brpc::CompressType RpcDumpMeta::compress_type() const {
  // @@protoc_insertion_point(field_get:brpc.RpcDumpMeta.compress_type)
  return static_cast< ::brpc::CompressType >(compress_type_);
}
 void RpcDumpMeta::set_compress_type(::brpc::CompressType value) {
  assert(::brpc::CompressType_IsValid(value));
  set_has_compress_type();
  compress_type_ = value;
  // @@protoc_insertion_point(field_set:brpc.RpcDumpMeta.compress_type)
}

// optional .brpc.ProtocolType protocol_type = 5;
bool RpcDumpMeta::has_protocol_type() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
void RpcDumpMeta::set_has_protocol_type() {
  _has_bits_[0] |= 0x00000010u;
}
void RpcDumpMeta::clear_has_protocol_type() {
  _has_bits_[0] &= ~0x00000010u;
}
void RpcDumpMeta::clear_protocol_type() {
  protocol_type_ = 0;
  clear_has_protocol_type();
}
 ::brpc::ProtocolType RpcDumpMeta::protocol_type() const {
  // @@protoc_insertion_point(field_get:brpc.RpcDumpMeta.protocol_type)
  return static_cast< ::brpc::ProtocolType >(protocol_type_);
}
 void RpcDumpMeta::set_protocol_type(::brpc::ProtocolType value) {
  assert(::brpc::ProtocolType_IsValid(value));
  set_has_protocol_type();
  protocol_type_ = value;
  // @@protoc_insertion_point(field_set:brpc.RpcDumpMeta.protocol_type)
}

// optional int32 attachment_size = 6;
bool RpcDumpMeta::has_attachment_size() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
void RpcDumpMeta::set_has_attachment_size() {
  _has_bits_[0] |= 0x00000020u;
}
void RpcDumpMeta::clear_has_attachment_size() {
  _has_bits_[0] &= ~0x00000020u;
}
void RpcDumpMeta::clear_attachment_size() {
  attachment_size_ = 0;
  clear_has_attachment_size();
}
 ::google::protobuf::int32 RpcDumpMeta::attachment_size() const {
  // @@protoc_insertion_point(field_get:brpc.RpcDumpMeta.attachment_size)
  return attachment_size_;
}
 void RpcDumpMeta::set_attachment_size(::google::protobuf::int32 value) {
  set_has_attachment_size();
  attachment_size_ = value;
  // @@protoc_insertion_point(field_set:brpc.RpcDumpMeta.attachment_size)
}

// optional bytes authentication_data = 7;
bool RpcDumpMeta::has_authentication_data() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
void RpcDumpMeta::set_has_authentication_data() {
  _has_bits_[0] |= 0x00000040u;
}
void RpcDumpMeta::clear_has_authentication_data() {
  _has_bits_[0] &= ~0x00000040u;
}
void RpcDumpMeta::clear_authentication_data() {
  authentication_data_.ClearToEmptyNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
  clear_has_authentication_data();
}
 const ::std::string& RpcDumpMeta::authentication_data() const {
  // @@protoc_insertion_point(field_get:brpc.RpcDumpMeta.authentication_data)
  return authentication_data_.GetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcDumpMeta::set_authentication_data(const ::std::string& value) {
  set_has_authentication_data();
  authentication_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), value);
  // @@protoc_insertion_point(field_set:brpc.RpcDumpMeta.authentication_data)
}
 void RpcDumpMeta::set_authentication_data(const char* value) {
  set_has_authentication_data();
  authentication_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:brpc.RpcDumpMeta.authentication_data)
}
 void RpcDumpMeta::set_authentication_data(const void* value, size_t size) {
  set_has_authentication_data();
  authentication_data_.SetNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:brpc.RpcDumpMeta.authentication_data)
}
 ::std::string* RpcDumpMeta::mutable_authentication_data() {
  set_has_authentication_data();
  // @@protoc_insertion_point(field_mutable:brpc.RpcDumpMeta.authentication_data)
  return authentication_data_.MutableNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 ::std::string* RpcDumpMeta::release_authentication_data() {
  // @@protoc_insertion_point(field_release:brpc.RpcDumpMeta.authentication_data)
  clear_has_authentication_data();
  return authentication_data_.ReleaseNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited());
}
 void RpcDumpMeta::set_allocated_authentication_data(::std::string* authentication_data) {
  if (authentication_data != NULL) {
    set_has_authentication_data();
  } else {
    clear_has_authentication_data();
  }
  authentication_data_.SetAllocatedNoArena(&::google::protobuf::internal::GetEmptyStringAlreadyInited(), authentication_data);
  // @@protoc_insertion_point(field_set_allocated:brpc.RpcDumpMeta.authentication_data)
}

#endif  // PROTOBUF_INLINE_NOT_IN_HEADERS

// @@protoc_insertion_point(namespace_scope)

}  // namespace brpc

// @@protoc_insertion_point(global_scope)