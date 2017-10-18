// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/Msg_Bag.proto

#ifndef PROTOBUF_protos_2fMsg_5fBag_2eproto__INCLUDED
#define PROTOBUF_protos_2fMsg_5fBag_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 3000000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 3000000 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/arena.h>
#include <google/protobuf/arenastring.h>
#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/metadata.h>
#include <google/protobuf/message.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/unknown_field_set.h>
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void protobuf_AddDesc_protos_2fMsg_5fBag_2eproto();
void protobuf_AssignDesc_protos_2fMsg_5fBag_2eproto();
void protobuf_ShutdownFile_protos_2fMsg_5fBag_2eproto();

class SetupEquipAck;
class SetupEquipReq;
class SetupMountAck;
class SetupMountReq;
class SetupPartnerAck;
class SetupPartnerReq;
class SetupPetAck;
class SetupPetReq;

// ===================================================================

class SetupEquipReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupEquipReq) */ {
 public:
  SetupEquipReq();
  virtual ~SetupEquipReq();

  SetupEquipReq(const SetupEquipReq& from);

  inline SetupEquipReq& operator=(const SetupEquipReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupEquipReq& default_instance();

  void Swap(SetupEquipReq* other);

  // implements Message ----------------------------------------------

  inline SetupEquipReq* New() const { return New(NULL); }

  SetupEquipReq* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SetupEquipReq& from);
  void MergeFrom(const SetupEquipReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SetupEquipReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 upguid = 1;
  void clear_upguid();
  static const int kUpguidFieldNumber = 1;
  ::google::protobuf::uint64 upguid() const;
  void set_upguid(::google::protobuf::uint64 value);

  // optional uint64 downguid = 2;
  void clear_downguid();
  static const int kDownguidFieldNumber = 2;
  ::google::protobuf::uint64 downguid() const;
  void set_downguid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:SetupEquipReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 upguid_;
  ::google::protobuf::uint64 downguid_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_AssignDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_ShutdownFile_protos_2fMsg_5fBag_2eproto();

  void InitAsDefaultInstance();
  static SetupEquipReq* default_instance_;
};
// -------------------------------------------------------------------

class SetupEquipAck : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupEquipAck) */ {
 public:
  SetupEquipAck();
  virtual ~SetupEquipAck();

  SetupEquipAck(const SetupEquipAck& from);

  inline SetupEquipAck& operator=(const SetupEquipAck& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupEquipAck& default_instance();

  void Swap(SetupEquipAck* other);

  // implements Message ----------------------------------------------

  inline SetupEquipAck* New() const { return New(NULL); }

  SetupEquipAck* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SetupEquipAck& from);
  void MergeFrom(const SetupEquipAck& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SetupEquipAck* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 RetCode = 1;
  void clear_retcode();
  static const int kRetCodeFieldNumber = 1;
  ::google::protobuf::uint32 retcode() const;
  void set_retcode(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:SetupEquipAck)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint32 retcode_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_AssignDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_ShutdownFile_protos_2fMsg_5fBag_2eproto();

  void InitAsDefaultInstance();
  static SetupEquipAck* default_instance_;
};
// -------------------------------------------------------------------

class SetupPetReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupPetReq) */ {
 public:
  SetupPetReq();
  virtual ~SetupPetReq();

  SetupPetReq(const SetupPetReq& from);

  inline SetupPetReq& operator=(const SetupPetReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupPetReq& default_instance();

  void Swap(SetupPetReq* other);

  // implements Message ----------------------------------------------

  inline SetupPetReq* New() const { return New(NULL); }

  SetupPetReq* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SetupPetReq& from);
  void MergeFrom(const SetupPetReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SetupPetReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 upguid = 1;
  void clear_upguid();
  static const int kUpguidFieldNumber = 1;
  ::google::protobuf::uint64 upguid() const;
  void set_upguid(::google::protobuf::uint64 value);

  // optional uint64 downguid = 2;
  void clear_downguid();
  static const int kDownguidFieldNumber = 2;
  ::google::protobuf::uint64 downguid() const;
  void set_downguid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:SetupPetReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 upguid_;
  ::google::protobuf::uint64 downguid_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_AssignDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_ShutdownFile_protos_2fMsg_5fBag_2eproto();

  void InitAsDefaultInstance();
  static SetupPetReq* default_instance_;
};
// -------------------------------------------------------------------

class SetupPetAck : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupPetAck) */ {
 public:
  SetupPetAck();
  virtual ~SetupPetAck();

  SetupPetAck(const SetupPetAck& from);

  inline SetupPetAck& operator=(const SetupPetAck& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupPetAck& default_instance();

  void Swap(SetupPetAck* other);

  // implements Message ----------------------------------------------

  inline SetupPetAck* New() const { return New(NULL); }

  SetupPetAck* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SetupPetAck& from);
  void MergeFrom(const SetupPetAck& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SetupPetAck* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 RetCode = 1;
  void clear_retcode();
  static const int kRetCodeFieldNumber = 1;
  ::google::protobuf::uint32 retcode() const;
  void set_retcode(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:SetupPetAck)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint32 retcode_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_AssignDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_ShutdownFile_protos_2fMsg_5fBag_2eproto();

  void InitAsDefaultInstance();
  static SetupPetAck* default_instance_;
};
// -------------------------------------------------------------------

class SetupPartnerReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupPartnerReq) */ {
 public:
  SetupPartnerReq();
  virtual ~SetupPartnerReq();

  SetupPartnerReq(const SetupPartnerReq& from);

  inline SetupPartnerReq& operator=(const SetupPartnerReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupPartnerReq& default_instance();

  void Swap(SetupPartnerReq* other);

  // implements Message ----------------------------------------------

  inline SetupPartnerReq* New() const { return New(NULL); }

  SetupPartnerReq* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SetupPartnerReq& from);
  void MergeFrom(const SetupPartnerReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SetupPartnerReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 upguid = 1;
  void clear_upguid();
  static const int kUpguidFieldNumber = 1;
  ::google::protobuf::uint64 upguid() const;
  void set_upguid(::google::protobuf::uint64 value);

  // optional uint64 downguid = 2;
  void clear_downguid();
  static const int kDownguidFieldNumber = 2;
  ::google::protobuf::uint64 downguid() const;
  void set_downguid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:SetupPartnerReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 upguid_;
  ::google::protobuf::uint64 downguid_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_AssignDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_ShutdownFile_protos_2fMsg_5fBag_2eproto();

  void InitAsDefaultInstance();
  static SetupPartnerReq* default_instance_;
};
// -------------------------------------------------------------------

class SetupPartnerAck : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupPartnerAck) */ {
 public:
  SetupPartnerAck();
  virtual ~SetupPartnerAck();

  SetupPartnerAck(const SetupPartnerAck& from);

  inline SetupPartnerAck& operator=(const SetupPartnerAck& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupPartnerAck& default_instance();

  void Swap(SetupPartnerAck* other);

  // implements Message ----------------------------------------------

  inline SetupPartnerAck* New() const { return New(NULL); }

  SetupPartnerAck* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SetupPartnerAck& from);
  void MergeFrom(const SetupPartnerAck& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SetupPartnerAck* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 RetCode = 1;
  void clear_retcode();
  static const int kRetCodeFieldNumber = 1;
  ::google::protobuf::uint32 retcode() const;
  void set_retcode(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:SetupPartnerAck)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint32 retcode_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_AssignDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_ShutdownFile_protos_2fMsg_5fBag_2eproto();

  void InitAsDefaultInstance();
  static SetupPartnerAck* default_instance_;
};
// -------------------------------------------------------------------

class SetupMountReq : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupMountReq) */ {
 public:
  SetupMountReq();
  virtual ~SetupMountReq();

  SetupMountReq(const SetupMountReq& from);

  inline SetupMountReq& operator=(const SetupMountReq& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupMountReq& default_instance();

  void Swap(SetupMountReq* other);

  // implements Message ----------------------------------------------

  inline SetupMountReq* New() const { return New(NULL); }

  SetupMountReq* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SetupMountReq& from);
  void MergeFrom(const SetupMountReq& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SetupMountReq* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint64 upguid = 1;
  void clear_upguid();
  static const int kUpguidFieldNumber = 1;
  ::google::protobuf::uint64 upguid() const;
  void set_upguid(::google::protobuf::uint64 value);

  // optional uint64 downguid = 2;
  void clear_downguid();
  static const int kDownguidFieldNumber = 2;
  ::google::protobuf::uint64 downguid() const;
  void set_downguid(::google::protobuf::uint64 value);

  // @@protoc_insertion_point(class_scope:SetupMountReq)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 upguid_;
  ::google::protobuf::uint64 downguid_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_AssignDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_ShutdownFile_protos_2fMsg_5fBag_2eproto();

  void InitAsDefaultInstance();
  static SetupMountReq* default_instance_;
};
// -------------------------------------------------------------------

class SetupMountAck : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:SetupMountAck) */ {
 public:
  SetupMountAck();
  virtual ~SetupMountAck();

  SetupMountAck(const SetupMountAck& from);

  inline SetupMountAck& operator=(const SetupMountAck& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const SetupMountAck& default_instance();

  void Swap(SetupMountAck* other);

  // implements Message ----------------------------------------------

  inline SetupMountAck* New() const { return New(NULL); }

  SetupMountAck* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const SetupMountAck& from);
  void MergeFrom(const SetupMountAck& from);
  void Clear();
  bool IsInitialized() const;

  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* InternalSerializeWithCachedSizesToArray(
      bool deterministic, ::google::protobuf::uint8* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const {
    return InternalSerializeWithCachedSizesToArray(false, output);
  }
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  void InternalSwap(SetupMountAck* other);
  private:
  inline ::google::protobuf::Arena* GetArenaNoVirtual() const {
    return _internal_metadata_.arena();
  }
  inline void* MaybeArenaPtr() const {
    return _internal_metadata_.raw_arena_ptr();
  }
  public:

  ::google::protobuf::Metadata GetMetadata() const;

  // nested types ----------------------------------------------------

  // accessors -------------------------------------------------------

  // optional uint32 RetCode = 1;
  void clear_retcode();
  static const int kRetCodeFieldNumber = 1;
  ::google::protobuf::uint32 retcode() const;
  void set_retcode(::google::protobuf::uint32 value);

  // @@protoc_insertion_point(class_scope:SetupMountAck)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint32 retcode_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_AssignDesc_protos_2fMsg_5fBag_2eproto();
  friend void protobuf_ShutdownFile_protos_2fMsg_5fBag_2eproto();

  void InitAsDefaultInstance();
  static SetupMountAck* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// SetupEquipReq

// optional uint64 upguid = 1;
inline void SetupEquipReq::clear_upguid() {
  upguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupEquipReq::upguid() const {
  // @@protoc_insertion_point(field_get:SetupEquipReq.upguid)
  return upguid_;
}
inline void SetupEquipReq::set_upguid(::google::protobuf::uint64 value) {
  
  upguid_ = value;
  // @@protoc_insertion_point(field_set:SetupEquipReq.upguid)
}

// optional uint64 downguid = 2;
inline void SetupEquipReq::clear_downguid() {
  downguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupEquipReq::downguid() const {
  // @@protoc_insertion_point(field_get:SetupEquipReq.downguid)
  return downguid_;
}
inline void SetupEquipReq::set_downguid(::google::protobuf::uint64 value) {
  
  downguid_ = value;
  // @@protoc_insertion_point(field_set:SetupEquipReq.downguid)
}

// -------------------------------------------------------------------

// SetupEquipAck

// optional uint32 RetCode = 1;
inline void SetupEquipAck::clear_retcode() {
  retcode_ = 0u;
}
inline ::google::protobuf::uint32 SetupEquipAck::retcode() const {
  // @@protoc_insertion_point(field_get:SetupEquipAck.RetCode)
  return retcode_;
}
inline void SetupEquipAck::set_retcode(::google::protobuf::uint32 value) {
  
  retcode_ = value;
  // @@protoc_insertion_point(field_set:SetupEquipAck.RetCode)
}

// -------------------------------------------------------------------

// SetupPetReq

// optional uint64 upguid = 1;
inline void SetupPetReq::clear_upguid() {
  upguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupPetReq::upguid() const {
  // @@protoc_insertion_point(field_get:SetupPetReq.upguid)
  return upguid_;
}
inline void SetupPetReq::set_upguid(::google::protobuf::uint64 value) {
  
  upguid_ = value;
  // @@protoc_insertion_point(field_set:SetupPetReq.upguid)
}

// optional uint64 downguid = 2;
inline void SetupPetReq::clear_downguid() {
  downguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupPetReq::downguid() const {
  // @@protoc_insertion_point(field_get:SetupPetReq.downguid)
  return downguid_;
}
inline void SetupPetReq::set_downguid(::google::protobuf::uint64 value) {
  
  downguid_ = value;
  // @@protoc_insertion_point(field_set:SetupPetReq.downguid)
}

// -------------------------------------------------------------------

// SetupPetAck

// optional uint32 RetCode = 1;
inline void SetupPetAck::clear_retcode() {
  retcode_ = 0u;
}
inline ::google::protobuf::uint32 SetupPetAck::retcode() const {
  // @@protoc_insertion_point(field_get:SetupPetAck.RetCode)
  return retcode_;
}
inline void SetupPetAck::set_retcode(::google::protobuf::uint32 value) {
  
  retcode_ = value;
  // @@protoc_insertion_point(field_set:SetupPetAck.RetCode)
}

// -------------------------------------------------------------------

// SetupPartnerReq

// optional uint64 upguid = 1;
inline void SetupPartnerReq::clear_upguid() {
  upguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupPartnerReq::upguid() const {
  // @@protoc_insertion_point(field_get:SetupPartnerReq.upguid)
  return upguid_;
}
inline void SetupPartnerReq::set_upguid(::google::protobuf::uint64 value) {
  
  upguid_ = value;
  // @@protoc_insertion_point(field_set:SetupPartnerReq.upguid)
}

// optional uint64 downguid = 2;
inline void SetupPartnerReq::clear_downguid() {
  downguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupPartnerReq::downguid() const {
  // @@protoc_insertion_point(field_get:SetupPartnerReq.downguid)
  return downguid_;
}
inline void SetupPartnerReq::set_downguid(::google::protobuf::uint64 value) {
  
  downguid_ = value;
  // @@protoc_insertion_point(field_set:SetupPartnerReq.downguid)
}

// -------------------------------------------------------------------

// SetupPartnerAck

// optional uint32 RetCode = 1;
inline void SetupPartnerAck::clear_retcode() {
  retcode_ = 0u;
}
inline ::google::protobuf::uint32 SetupPartnerAck::retcode() const {
  // @@protoc_insertion_point(field_get:SetupPartnerAck.RetCode)
  return retcode_;
}
inline void SetupPartnerAck::set_retcode(::google::protobuf::uint32 value) {
  
  retcode_ = value;
  // @@protoc_insertion_point(field_set:SetupPartnerAck.RetCode)
}

// -------------------------------------------------------------------

// SetupMountReq

// optional uint64 upguid = 1;
inline void SetupMountReq::clear_upguid() {
  upguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupMountReq::upguid() const {
  // @@protoc_insertion_point(field_get:SetupMountReq.upguid)
  return upguid_;
}
inline void SetupMountReq::set_upguid(::google::protobuf::uint64 value) {
  
  upguid_ = value;
  // @@protoc_insertion_point(field_set:SetupMountReq.upguid)
}

// optional uint64 downguid = 2;
inline void SetupMountReq::clear_downguid() {
  downguid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 SetupMountReq::downguid() const {
  // @@protoc_insertion_point(field_get:SetupMountReq.downguid)
  return downguid_;
}
inline void SetupMountReq::set_downguid(::google::protobuf::uint64 value) {
  
  downguid_ = value;
  // @@protoc_insertion_point(field_set:SetupMountReq.downguid)
}

// -------------------------------------------------------------------

// SetupMountAck

// optional uint32 RetCode = 1;
inline void SetupMountAck::clear_retcode() {
  retcode_ = 0u;
}
inline ::google::protobuf::uint32 SetupMountAck::retcode() const {
  // @@protoc_insertion_point(field_get:SetupMountAck.RetCode)
  return retcode_;
}
inline void SetupMountAck::set_retcode(::google::protobuf::uint32 value) {
  
  retcode_ = value;
  // @@protoc_insertion_point(field_set:SetupMountAck.RetCode)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------

// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protos_2fMsg_5fBag_2eproto__INCLUDED