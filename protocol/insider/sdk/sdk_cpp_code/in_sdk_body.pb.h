// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: in_sdk_body.proto

#ifndef GOOGLE_PROTOBUF_INCLUDED_in_5fsdk_5fbody_2eproto
#define GOOGLE_PROTOBUF_INCLUDED_in_5fsdk_5fbody_2eproto

#include <limits>
#include <string>

#include <google/protobuf/port_def.inc>
#if PROTOBUF_VERSION < 3010000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers. Please update
#error your headers.
#endif
#if 3010000 < PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers. Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/port_undef.inc>
#include <google/protobuf/io/coded_stream.h>
#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_table_driven.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/inlined_string_field.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/generated_message_reflection.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>  // IWYU pragma: export
#include <google/protobuf/extension_set.h>  // IWYU pragma: export
#include <google/protobuf/generated_enum_reflection.h>
#include <google/protobuf/unknown_field_set.h>
#include "in_sdk_body_user.pb.h"
// @@protoc_insertion_point(includes)
#include <google/protobuf/port_def.inc>
#define PROTOBUF_INTERNAL_EXPORT_in_5fsdk_5fbody_2eproto
PROTOBUF_NAMESPACE_OPEN
namespace internal {
class AnyMetadata;
}  // namespace internal
PROTOBUF_NAMESPACE_CLOSE

// Internal implementation detail -- do not use these members.
struct TableStruct_in_5fsdk_5fbody_2eproto {
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTableField entries[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::AuxillaryParseTableField aux[]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::ParseTable schema[2]
    PROTOBUF_SECTION_VARIABLE(protodesc_cold);
  static const ::PROTOBUF_NAMESPACE_ID::internal::FieldMetadata field_metadata[];
  static const ::PROTOBUF_NAMESPACE_ID::internal::SerializationTable serialization_table[];
  static const ::PROTOBUF_NAMESPACE_ID::uint32 offsets[];
};
extern const ::PROTOBUF_NAMESPACE_ID::internal::DescriptorTable descriptor_table_in_5fsdk_5fbody_2eproto;
namespace insider {
namespace sdk {
class Body;
class BodyDefaultTypeInternal;
extern BodyDefaultTypeInternal _Body_default_instance_;
class Content;
class ContentDefaultTypeInternal;
extern ContentDefaultTypeInternal _Content_default_instance_;
}  // namespace sdk
}  // namespace insider
PROTOBUF_NAMESPACE_OPEN
template<> ::insider::sdk::Body* Arena::CreateMaybeMessage<::insider::sdk::Body>(Arena*);
template<> ::insider::sdk::Content* Arena::CreateMaybeMessage<::insider::sdk::Content>(Arena*);
PROTOBUF_NAMESPACE_CLOSE
namespace insider {
namespace sdk {

enum OperationType : int {
  INVALID = 0,
  GET = 1,
  POST = 2,
  PUT = 4,
  DELETE = 8,
  OperationType_INT_MIN_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::min(),
  OperationType_INT_MAX_SENTINEL_DO_NOT_USE_ = std::numeric_limits<::PROTOBUF_NAMESPACE_ID::int32>::max()
};
bool OperationType_IsValid(int value);
constexpr OperationType OperationType_MIN = INVALID;
constexpr OperationType OperationType_MAX = DELETE;
constexpr int OperationType_ARRAYSIZE = OperationType_MAX + 1;

const ::PROTOBUF_NAMESPACE_ID::EnumDescriptor* OperationType_descriptor();
template<typename T>
inline const std::string& OperationType_Name(T enum_t_value) {
  static_assert(::std::is_same<T, OperationType>::value ||
    ::std::is_integral<T>::value,
    "Incorrect type passed to function OperationType_Name.");
  return ::PROTOBUF_NAMESPACE_ID::internal::NameOfEnum(
    OperationType_descriptor(), enum_t_value);
}
inline bool OperationType_Parse(
    const std::string& name, OperationType* value) {
  return ::PROTOBUF_NAMESPACE_ID::internal::ParseNamedEnum<OperationType>(
    OperationType_descriptor(), name, value);
}
// ===================================================================

class Content :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:insider.sdk.Content) */ {
 public:
  Content();
  virtual ~Content();

  Content(const Content& from);
  Content(Content&& from) noexcept
    : Content() {
    *this = ::std::move(from);
  }

  inline Content& operator=(const Content& from) {
    CopyFrom(from);
    return *this;
  }
  inline Content& operator=(Content&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Content& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Content* internal_default_instance() {
    return reinterpret_cast<const Content*>(
               &_Content_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    0;

  friend void swap(Content& a, Content& b) {
    a.Swap(&b);
  }
  inline void Swap(Content* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Content* New() const final {
    return CreateMaybeMessage<Content>(nullptr);
  }

  Content* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Content>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Content& from);
  void MergeFrom(const Content& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Content* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "insider.sdk.Content";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_in_5fsdk_5fbody_2eproto);
    return ::descriptor_table_in_5fsdk_5fbody_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kMagicFieldNumber = 1,
  };
  // int64 magic = 1;
  void clear_magic();
  ::PROTOBUF_NAMESPACE_ID::int64 magic() const;
  void set_magic(::PROTOBUF_NAMESPACE_ID::int64 value);
  private:
  ::PROTOBUF_NAMESPACE_ID::int64 _internal_magic() const;
  void _internal_set_magic(::PROTOBUF_NAMESPACE_ID::int64 value);
  public:

  // @@protoc_insertion_point(class_scope:insider.sdk.Content)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::int64 magic_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_in_5fsdk_5fbody_2eproto;
};
// -------------------------------------------------------------------

class Body :
    public ::PROTOBUF_NAMESPACE_ID::Message /* @@protoc_insertion_point(class_definition:insider.sdk.Body) */ {
 public:
  Body();
  virtual ~Body();

  Body(const Body& from);
  Body(Body&& from) noexcept
    : Body() {
    *this = ::std::move(from);
  }

  inline Body& operator=(const Body& from) {
    CopyFrom(from);
    return *this;
  }
  inline Body& operator=(Body&& from) noexcept {
    if (GetArenaNoVirtual() == from.GetArenaNoVirtual()) {
      if (this != &from) InternalSwap(&from);
    } else {
      CopyFrom(from);
    }
    return *this;
  }

  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* descriptor() {
    return GetDescriptor();
  }
  static const ::PROTOBUF_NAMESPACE_ID::Descriptor* GetDescriptor() {
    return GetMetadataStatic().descriptor;
  }
  static const ::PROTOBUF_NAMESPACE_ID::Reflection* GetReflection() {
    return GetMetadataStatic().reflection;
  }
  static const Body& default_instance();

  static void InitAsDefaultInstance();  // FOR INTERNAL USE ONLY
  static inline const Body* internal_default_instance() {
    return reinterpret_cast<const Body*>(
               &_Body_default_instance_);
  }
  static constexpr int kIndexInFileMessages =
    1;

  friend void swap(Body& a, Body& b) {
    a.Swap(&b);
  }
  inline void Swap(Body* other) {
    if (other == this) return;
    InternalSwap(other);
  }

  // implements Message ----------------------------------------------

  inline Body* New() const final {
    return CreateMaybeMessage<Body>(nullptr);
  }

  Body* New(::PROTOBUF_NAMESPACE_ID::Arena* arena) const final {
    return CreateMaybeMessage<Body>(arena);
  }
  void CopyFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void MergeFrom(const ::PROTOBUF_NAMESPACE_ID::Message& from) final;
  void CopyFrom(const Body& from);
  void MergeFrom(const Body& from);
  PROTOBUF_ATTRIBUTE_REINITIALIZES void Clear() final;
  bool IsInitialized() const final;

  size_t ByteSizeLong() const final;
  const char* _InternalParse(const char* ptr, ::PROTOBUF_NAMESPACE_ID::internal::ParseContext* ctx) final;
  ::PROTOBUF_NAMESPACE_ID::uint8* InternalSerializeWithCachedSizesToArray(
      ::PROTOBUF_NAMESPACE_ID::uint8* target, ::PROTOBUF_NAMESPACE_ID::io::EpsCopyOutputStream* stream) const final;
  int GetCachedSize() const final { return _cached_size_.Get(); }

  private:
  inline void SharedCtor();
  inline void SharedDtor();
  void SetCachedSize(int size) const final;
  void InternalSwap(Body* other);
  friend class ::PROTOBUF_NAMESPACE_ID::internal::AnyMetadata;
  static ::PROTOBUF_NAMESPACE_ID::StringPiece FullMessageName() {
    return "insider.sdk.Body";
  }
  private:
  inline ::PROTOBUF_NAMESPACE_ID::Arena* GetArenaNoVirtual() const {
    return nullptr;
  }
  inline void* MaybeArenaPtr() const {
    return nullptr;
  }
  public:

  ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadata() const final;
  private:
  static ::PROTOBUF_NAMESPACE_ID::Metadata GetMetadataStatic() {
    ::PROTOBUF_NAMESPACE_ID::internal::AssignDescriptors(&::descriptor_table_in_5fsdk_5fbody_2eproto);
    return ::descriptor_table_in_5fsdk_5fbody_2eproto.file_level_metadata[kIndexInFileMessages];
  }

  public:

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  enum : int {
    kUrlFieldNumber = 2,
    kUserSessionFieldNumber = 1,
    kContentFieldNumber = 5,
    kMethodFieldNumber = 3,
  };
  // string url = 2;
  void clear_url();
  const std::string& url() const;
  void set_url(const std::string& value);
  void set_url(std::string&& value);
  void set_url(const char* value);
  void set_url(const char* value, size_t size);
  std::string* mutable_url();
  std::string* release_url();
  void set_allocated_url(std::string* url);
  private:
  const std::string& _internal_url() const;
  void _internal_set_url(const std::string& value);
  std::string* _internal_mutable_url();
  public:

  // .insider.sdk.UserSessionMsg user_session = 1;
  bool has_user_session() const;
  private:
  bool _internal_has_user_session() const;
  public:
  void clear_user_session();
  const ::insider::sdk::UserSessionMsg& user_session() const;
  ::insider::sdk::UserSessionMsg* release_user_session();
  ::insider::sdk::UserSessionMsg* mutable_user_session();
  void set_allocated_user_session(::insider::sdk::UserSessionMsg* user_session);
  private:
  const ::insider::sdk::UserSessionMsg& _internal_user_session() const;
  ::insider::sdk::UserSessionMsg* _internal_mutable_user_session();
  public:

  // .insider.sdk.Content content = 5;
  bool has_content() const;
  private:
  bool _internal_has_content() const;
  public:
  void clear_content();
  const ::insider::sdk::Content& content() const;
  ::insider::sdk::Content* release_content();
  ::insider::sdk::Content* mutable_content();
  void set_allocated_content(::insider::sdk::Content* content);
  private:
  const ::insider::sdk::Content& _internal_content() const;
  ::insider::sdk::Content* _internal_mutable_content();
  public:

  // .insider.sdk.OperationType method = 3;
  void clear_method();
  ::insider::sdk::OperationType method() const;
  void set_method(::insider::sdk::OperationType value);
  private:
  ::insider::sdk::OperationType _internal_method() const;
  void _internal_set_method(::insider::sdk::OperationType value);
  public:

  // @@protoc_insertion_point(class_scope:insider.sdk.Body)
 private:
  class _Internal;

  ::PROTOBUF_NAMESPACE_ID::internal::InternalMetadataWithArena _internal_metadata_;
  ::PROTOBUF_NAMESPACE_ID::internal::ArenaStringPtr url_;
  ::insider::sdk::UserSessionMsg* user_session_;
  ::insider::sdk::Content* content_;
  int method_;
  mutable ::PROTOBUF_NAMESPACE_ID::internal::CachedSize _cached_size_;
  friend struct ::TableStruct_in_5fsdk_5fbody_2eproto;
};
// ===================================================================


// ===================================================================

#ifdef __GNUC__
  #pragma GCC diagnostic push
  #pragma GCC diagnostic ignored "-Wstrict-aliasing"
#endif  // __GNUC__
// Content

// int64 magic = 1;
inline void Content::clear_magic() {
  magic_ = PROTOBUF_LONGLONG(0);
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Content::_internal_magic() const {
  return magic_;
}
inline ::PROTOBUF_NAMESPACE_ID::int64 Content::magic() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Content.magic)
  return _internal_magic();
}
inline void Content::_internal_set_magic(::PROTOBUF_NAMESPACE_ID::int64 value) {
  
  magic_ = value;
}
inline void Content::set_magic(::PROTOBUF_NAMESPACE_ID::int64 value) {
  _internal_set_magic(value);
  // @@protoc_insertion_point(field_set:insider.sdk.Content.magic)
}

// -------------------------------------------------------------------

// Body

// .insider.sdk.UserSessionMsg user_session = 1;
inline bool Body::_internal_has_user_session() const {
  return this != internal_default_instance() && user_session_ != nullptr;
}
inline bool Body::has_user_session() const {
  return _internal_has_user_session();
}
inline const ::insider::sdk::UserSessionMsg& Body::_internal_user_session() const {
  const ::insider::sdk::UserSessionMsg* p = user_session_;
  return p != nullptr ? *p : *reinterpret_cast<const ::insider::sdk::UserSessionMsg*>(
      &::insider::sdk::_UserSessionMsg_default_instance_);
}
inline const ::insider::sdk::UserSessionMsg& Body::user_session() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Body.user_session)
  return _internal_user_session();
}
inline ::insider::sdk::UserSessionMsg* Body::release_user_session() {
  // @@protoc_insertion_point(field_release:insider.sdk.Body.user_session)
  
  ::insider::sdk::UserSessionMsg* temp = user_session_;
  user_session_ = nullptr;
  return temp;
}
inline ::insider::sdk::UserSessionMsg* Body::_internal_mutable_user_session() {
  
  if (user_session_ == nullptr) {
    auto* p = CreateMaybeMessage<::insider::sdk::UserSessionMsg>(GetArenaNoVirtual());
    user_session_ = p;
  }
  return user_session_;
}
inline ::insider::sdk::UserSessionMsg* Body::mutable_user_session() {
  // @@protoc_insertion_point(field_mutable:insider.sdk.Body.user_session)
  return _internal_mutable_user_session();
}
inline void Body::set_allocated_user_session(::insider::sdk::UserSessionMsg* user_session) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete reinterpret_cast< ::PROTOBUF_NAMESPACE_ID::MessageLite*>(user_session_);
  }
  if (user_session) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      user_session = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, user_session, submessage_arena);
    }
    
  } else {
    
  }
  user_session_ = user_session;
  // @@protoc_insertion_point(field_set_allocated:insider.sdk.Body.user_session)
}

// string url = 2;
inline void Body::clear_url() {
  url_.ClearToEmptyNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline const std::string& Body::url() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Body.url)
  return _internal_url();
}
inline void Body::set_url(const std::string& value) {
  _internal_set_url(value);
  // @@protoc_insertion_point(field_set:insider.sdk.Body.url)
}
inline std::string* Body::mutable_url() {
  // @@protoc_insertion_point(field_mutable:insider.sdk.Body.url)
  return _internal_mutable_url();
}
inline const std::string& Body::_internal_url() const {
  return url_.GetNoArena();
}
inline void Body::_internal_set_url(const std::string& value) {
  
  url_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), value);
}
inline void Body::set_url(std::string&& value) {
  
  url_.SetNoArena(
    &::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::move(value));
  // @@protoc_insertion_point(field_set_rvalue:insider.sdk.Body.url)
}
inline void Body::set_url(const char* value) {
  GOOGLE_DCHECK(value != nullptr);
  
  url_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), ::std::string(value));
  // @@protoc_insertion_point(field_set_char:insider.sdk.Body.url)
}
inline void Body::set_url(const char* value, size_t size) {
  
  url_.SetNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(),
      ::std::string(reinterpret_cast<const char*>(value), size));
  // @@protoc_insertion_point(field_set_pointer:insider.sdk.Body.url)
}
inline std::string* Body::_internal_mutable_url() {
  
  return url_.MutableNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline std::string* Body::release_url() {
  // @@protoc_insertion_point(field_release:insider.sdk.Body.url)
  
  return url_.ReleaseNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited());
}
inline void Body::set_allocated_url(std::string* url) {
  if (url != nullptr) {
    
  } else {
    
  }
  url_.SetAllocatedNoArena(&::PROTOBUF_NAMESPACE_ID::internal::GetEmptyStringAlreadyInited(), url);
  // @@protoc_insertion_point(field_set_allocated:insider.sdk.Body.url)
}

// .insider.sdk.OperationType method = 3;
inline void Body::clear_method() {
  method_ = 0;
}
inline ::insider::sdk::OperationType Body::_internal_method() const {
  return static_cast< ::insider::sdk::OperationType >(method_);
}
inline ::insider::sdk::OperationType Body::method() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Body.method)
  return _internal_method();
}
inline void Body::_internal_set_method(::insider::sdk::OperationType value) {
  
  method_ = value;
}
inline void Body::set_method(::insider::sdk::OperationType value) {
  _internal_set_method(value);
  // @@protoc_insertion_point(field_set:insider.sdk.Body.method)
}

// .insider.sdk.Content content = 5;
inline bool Body::_internal_has_content() const {
  return this != internal_default_instance() && content_ != nullptr;
}
inline bool Body::has_content() const {
  return _internal_has_content();
}
inline void Body::clear_content() {
  if (GetArenaNoVirtual() == nullptr && content_ != nullptr) {
    delete content_;
  }
  content_ = nullptr;
}
inline const ::insider::sdk::Content& Body::_internal_content() const {
  const ::insider::sdk::Content* p = content_;
  return p != nullptr ? *p : *reinterpret_cast<const ::insider::sdk::Content*>(
      &::insider::sdk::_Content_default_instance_);
}
inline const ::insider::sdk::Content& Body::content() const {
  // @@protoc_insertion_point(field_get:insider.sdk.Body.content)
  return _internal_content();
}
inline ::insider::sdk::Content* Body::release_content() {
  // @@protoc_insertion_point(field_release:insider.sdk.Body.content)
  
  ::insider::sdk::Content* temp = content_;
  content_ = nullptr;
  return temp;
}
inline ::insider::sdk::Content* Body::_internal_mutable_content() {
  
  if (content_ == nullptr) {
    auto* p = CreateMaybeMessage<::insider::sdk::Content>(GetArenaNoVirtual());
    content_ = p;
  }
  return content_;
}
inline ::insider::sdk::Content* Body::mutable_content() {
  // @@protoc_insertion_point(field_mutable:insider.sdk.Body.content)
  return _internal_mutable_content();
}
inline void Body::set_allocated_content(::insider::sdk::Content* content) {
  ::PROTOBUF_NAMESPACE_ID::Arena* message_arena = GetArenaNoVirtual();
  if (message_arena == nullptr) {
    delete content_;
  }
  if (content) {
    ::PROTOBUF_NAMESPACE_ID::Arena* submessage_arena = nullptr;
    if (message_arena != submessage_arena) {
      content = ::PROTOBUF_NAMESPACE_ID::internal::GetOwnedMessage(
          message_arena, content, submessage_arena);
    }
    
  } else {
    
  }
  content_ = content;
  // @@protoc_insertion_point(field_set_allocated:insider.sdk.Body.content)
}

#ifdef __GNUC__
  #pragma GCC diagnostic pop
#endif  // __GNUC__
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

}  // namespace sdk
}  // namespace insider

PROTOBUF_NAMESPACE_OPEN

template <> struct is_proto_enum< ::insider::sdk::OperationType> : ::std::true_type {};
template <>
inline const EnumDescriptor* GetEnumDescriptor< ::insider::sdk::OperationType>() {
  return ::insider::sdk::OperationType_descriptor();
}

PROTOBUF_NAMESPACE_CLOSE

// @@protoc_insertion_point(global_scope)

#include <google/protobuf/port_undef.inc>
#endif  // GOOGLE_PROTOBUF_INCLUDED_GOOGLE_PROTOBUF_INCLUDED_in_5fsdk_5fbody_2eproto
