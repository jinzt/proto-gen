// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: protos/Msg_Copy.proto

#ifndef PROTOBUF_protos_2fMsg_5fCopy_2eproto__INCLUDED
#define PROTOBUF_protos_2fMsg_5fCopy_2eproto__INCLUDED

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
void protobuf_AddDesc_protos_2fMsg_5fCopy_2eproto();
void protobuf_AssignDesc_protos_2fMsg_5fCopy_2eproto();
void protobuf_ShutdownFile_protos_2fMsg_5fCopy_2eproto();

class ResultObject;
class ResultPlayer;

// ===================================================================

class ResultObject : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ResultObject) */ {
 public:
  ResultObject();
  virtual ~ResultObject();

  ResultObject(const ResultObject& from);

  inline ResultObject& operator=(const ResultObject& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResultObject& default_instance();

  void Swap(ResultObject* other);

  // implements Message ----------------------------------------------

  inline ResultObject* New() const { return New(NULL); }

  ResultObject* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResultObject& from);
  void MergeFrom(const ResultObject& from);
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
  void InternalSwap(ResultObject* other);
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

  // optional uint64 ObjectID = 1;
  void clear_objectid();
  static const int kObjectIDFieldNumber = 1;
  ::google::protobuf::uint64 objectid() const;
  void set_objectid(::google::protobuf::uint64 value);

  // optional int32 ActorID = 2;
  void clear_actorid();
  static const int kActorIDFieldNumber = 2;
  ::google::protobuf::int32 actorid() const;
  void set_actorid(::google::protobuf::int32 value);

  // optional int32 ObjectType = 3;
  void clear_objecttype();
  static const int kObjectTypeFieldNumber = 3;
  ::google::protobuf::int32 objecttype() const;
  void set_objecttype(::google::protobuf::int32 value);

  // optional int32 Result = 4;
  void clear_result();
  static const int kResultFieldNumber = 4;
  ::google::protobuf::int32 result() const;
  void set_result(::google::protobuf::int32 value);

  // optional int32 Kill = 5;
  void clear_kill();
  static const int kKillFieldNumber = 5;
  ::google::protobuf::int32 kill() const;
  void set_kill(::google::protobuf::int32 value);

  // optional int32 Death = 6;
  void clear_death();
  static const int kDeathFieldNumber = 6;
  ::google::protobuf::int32 death() const;
  void set_death(::google::protobuf::int32 value);

  // optional int32 Heal = 7;
  void clear_heal();
  static const int kHealFieldNumber = 7;
  ::google::protobuf::int32 heal() const;
  void set_heal(::google::protobuf::int32 value);

  // optional int32 Damage = 8;
  void clear_damage();
  static const int kDamageFieldNumber = 8;
  ::google::protobuf::int32 damage() const;
  void set_damage(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ResultObject)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 objectid_;
  ::google::protobuf::int32 actorid_;
  ::google::protobuf::int32 objecttype_;
  ::google::protobuf::int32 result_;
  ::google::protobuf::int32 kill_;
  ::google::protobuf::int32 death_;
  ::google::protobuf::int32 heal_;
  ::google::protobuf::int32 damage_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_protos_2fMsg_5fCopy_2eproto();
  friend void protobuf_AssignDesc_protos_2fMsg_5fCopy_2eproto();
  friend void protobuf_ShutdownFile_protos_2fMsg_5fCopy_2eproto();

  void InitAsDefaultInstance();
  static ResultObject* default_instance_;
};
// -------------------------------------------------------------------

class ResultPlayer : public ::google::protobuf::Message /* @@protoc_insertion_point(class_definition:ResultPlayer) */ {
 public:
  ResultPlayer();
  virtual ~ResultPlayer();

  ResultPlayer(const ResultPlayer& from);

  inline ResultPlayer& operator=(const ResultPlayer& from) {
    CopyFrom(from);
    return *this;
  }

  static const ::google::protobuf::Descriptor* descriptor();
  static const ResultPlayer& default_instance();

  void Swap(ResultPlayer* other);

  // implements Message ----------------------------------------------

  inline ResultPlayer* New() const { return New(NULL); }

  ResultPlayer* New(::google::protobuf::Arena* arena) const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const ResultPlayer& from);
  void MergeFrom(const ResultPlayer& from);
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
  void InternalSwap(ResultPlayer* other);
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

  // optional uint64 ObjectID = 1;
  void clear_objectid();
  static const int kObjectIDFieldNumber = 1;
  ::google::protobuf::uint64 objectid() const;
  void set_objectid(::google::protobuf::uint64 value);

  // optional int32 ActorID = 2;
  void clear_actorid();
  static const int kActorIDFieldNumber = 2;
  ::google::protobuf::int32 actorid() const;
  void set_actorid(::google::protobuf::int32 value);

  // optional int32 ObjectType = 3;
  void clear_objecttype();
  static const int kObjectTypeFieldNumber = 3;
  ::google::protobuf::int32 objecttype() const;
  void set_objecttype(::google::protobuf::int32 value);

  // optional int32 Result = 4;
  void clear_result();
  static const int kResultFieldNumber = 4;
  ::google::protobuf::int32 result() const;
  void set_result(::google::protobuf::int32 value);

  // optional int32 Kill = 5;
  void clear_kill();
  static const int kKillFieldNumber = 5;
  ::google::protobuf::int32 kill() const;
  void set_kill(::google::protobuf::int32 value);

  // optional int32 Death = 6;
  void clear_death();
  static const int kDeathFieldNumber = 6;
  ::google::protobuf::int32 death() const;
  void set_death(::google::protobuf::int32 value);

  // optional int32 Heal = 7;
  void clear_heal();
  static const int kHealFieldNumber = 7;
  ::google::protobuf::int32 heal() const;
  void set_heal(::google::protobuf::int32 value);

  // optional int32 Damage = 8;
  void clear_damage();
  static const int kDamageFieldNumber = 8;
  ::google::protobuf::int32 damage() const;
  void set_damage(::google::protobuf::int32 value);

  // @@protoc_insertion_point(class_scope:ResultPlayer)
 private:

  ::google::protobuf::internal::InternalMetadataWithArena _internal_metadata_;
  bool _is_default_instance_;
  ::google::protobuf::uint64 objectid_;
  ::google::protobuf::int32 actorid_;
  ::google::protobuf::int32 objecttype_;
  ::google::protobuf::int32 result_;
  ::google::protobuf::int32 kill_;
  ::google::protobuf::int32 death_;
  ::google::protobuf::int32 heal_;
  ::google::protobuf::int32 damage_;
  mutable int _cached_size_;
  friend void  protobuf_AddDesc_protos_2fMsg_5fCopy_2eproto();
  friend void protobuf_AssignDesc_protos_2fMsg_5fCopy_2eproto();
  friend void protobuf_ShutdownFile_protos_2fMsg_5fCopy_2eproto();

  void InitAsDefaultInstance();
  static ResultPlayer* default_instance_;
};
// ===================================================================


// ===================================================================

#if !PROTOBUF_INLINE_NOT_IN_HEADERS
// ResultObject

// optional uint64 ObjectID = 1;
inline void ResultObject::clear_objectid() {
  objectid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ResultObject::objectid() const {
  // @@protoc_insertion_point(field_get:ResultObject.ObjectID)
  return objectid_;
}
inline void ResultObject::set_objectid(::google::protobuf::uint64 value) {
  
  objectid_ = value;
  // @@protoc_insertion_point(field_set:ResultObject.ObjectID)
}

// optional int32 ActorID = 2;
inline void ResultObject::clear_actorid() {
  actorid_ = 0;
}
inline ::google::protobuf::int32 ResultObject::actorid() const {
  // @@protoc_insertion_point(field_get:ResultObject.ActorID)
  return actorid_;
}
inline void ResultObject::set_actorid(::google::protobuf::int32 value) {
  
  actorid_ = value;
  // @@protoc_insertion_point(field_set:ResultObject.ActorID)
}

// optional int32 ObjectType = 3;
inline void ResultObject::clear_objecttype() {
  objecttype_ = 0;
}
inline ::google::protobuf::int32 ResultObject::objecttype() const {
  // @@protoc_insertion_point(field_get:ResultObject.ObjectType)
  return objecttype_;
}
inline void ResultObject::set_objecttype(::google::protobuf::int32 value) {
  
  objecttype_ = value;
  // @@protoc_insertion_point(field_set:ResultObject.ObjectType)
}

// optional int32 Result = 4;
inline void ResultObject::clear_result() {
  result_ = 0;
}
inline ::google::protobuf::int32 ResultObject::result() const {
  // @@protoc_insertion_point(field_get:ResultObject.Result)
  return result_;
}
inline void ResultObject::set_result(::google::protobuf::int32 value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:ResultObject.Result)
}

// optional int32 Kill = 5;
inline void ResultObject::clear_kill() {
  kill_ = 0;
}
inline ::google::protobuf::int32 ResultObject::kill() const {
  // @@protoc_insertion_point(field_get:ResultObject.Kill)
  return kill_;
}
inline void ResultObject::set_kill(::google::protobuf::int32 value) {
  
  kill_ = value;
  // @@protoc_insertion_point(field_set:ResultObject.Kill)
}

// optional int32 Death = 6;
inline void ResultObject::clear_death() {
  death_ = 0;
}
inline ::google::protobuf::int32 ResultObject::death() const {
  // @@protoc_insertion_point(field_get:ResultObject.Death)
  return death_;
}
inline void ResultObject::set_death(::google::protobuf::int32 value) {
  
  death_ = value;
  // @@protoc_insertion_point(field_set:ResultObject.Death)
}

// optional int32 Heal = 7;
inline void ResultObject::clear_heal() {
  heal_ = 0;
}
inline ::google::protobuf::int32 ResultObject::heal() const {
  // @@protoc_insertion_point(field_get:ResultObject.Heal)
  return heal_;
}
inline void ResultObject::set_heal(::google::protobuf::int32 value) {
  
  heal_ = value;
  // @@protoc_insertion_point(field_set:ResultObject.Heal)
}

// optional int32 Damage = 8;
inline void ResultObject::clear_damage() {
  damage_ = 0;
}
inline ::google::protobuf::int32 ResultObject::damage() const {
  // @@protoc_insertion_point(field_get:ResultObject.Damage)
  return damage_;
}
inline void ResultObject::set_damage(::google::protobuf::int32 value) {
  
  damage_ = value;
  // @@protoc_insertion_point(field_set:ResultObject.Damage)
}

// -------------------------------------------------------------------

// ResultPlayer

// optional uint64 ObjectID = 1;
inline void ResultPlayer::clear_objectid() {
  objectid_ = GOOGLE_ULONGLONG(0);
}
inline ::google::protobuf::uint64 ResultPlayer::objectid() const {
  // @@protoc_insertion_point(field_get:ResultPlayer.ObjectID)
  return objectid_;
}
inline void ResultPlayer::set_objectid(::google::protobuf::uint64 value) {
  
  objectid_ = value;
  // @@protoc_insertion_point(field_set:ResultPlayer.ObjectID)
}

// optional int32 ActorID = 2;
inline void ResultPlayer::clear_actorid() {
  actorid_ = 0;
}
inline ::google::protobuf::int32 ResultPlayer::actorid() const {
  // @@protoc_insertion_point(field_get:ResultPlayer.ActorID)
  return actorid_;
}
inline void ResultPlayer::set_actorid(::google::protobuf::int32 value) {
  
  actorid_ = value;
  // @@protoc_insertion_point(field_set:ResultPlayer.ActorID)
}

// optional int32 ObjectType = 3;
inline void ResultPlayer::clear_objecttype() {
  objecttype_ = 0;
}
inline ::google::protobuf::int32 ResultPlayer::objecttype() const {
  // @@protoc_insertion_point(field_get:ResultPlayer.ObjectType)
  return objecttype_;
}
inline void ResultPlayer::set_objecttype(::google::protobuf::int32 value) {
  
  objecttype_ = value;
  // @@protoc_insertion_point(field_set:ResultPlayer.ObjectType)
}

// optional int32 Result = 4;
inline void ResultPlayer::clear_result() {
  result_ = 0;
}
inline ::google::protobuf::int32 ResultPlayer::result() const {
  // @@protoc_insertion_point(field_get:ResultPlayer.Result)
  return result_;
}
inline void ResultPlayer::set_result(::google::protobuf::int32 value) {
  
  result_ = value;
  // @@protoc_insertion_point(field_set:ResultPlayer.Result)
}

// optional int32 Kill = 5;
inline void ResultPlayer::clear_kill() {
  kill_ = 0;
}
inline ::google::protobuf::int32 ResultPlayer::kill() const {
  // @@protoc_insertion_point(field_get:ResultPlayer.Kill)
  return kill_;
}
inline void ResultPlayer::set_kill(::google::protobuf::int32 value) {
  
  kill_ = value;
  // @@protoc_insertion_point(field_set:ResultPlayer.Kill)
}

// optional int32 Death = 6;
inline void ResultPlayer::clear_death() {
  death_ = 0;
}
inline ::google::protobuf::int32 ResultPlayer::death() const {
  // @@protoc_insertion_point(field_get:ResultPlayer.Death)
  return death_;
}
inline void ResultPlayer::set_death(::google::protobuf::int32 value) {
  
  death_ = value;
  // @@protoc_insertion_point(field_set:ResultPlayer.Death)
}

// optional int32 Heal = 7;
inline void ResultPlayer::clear_heal() {
  heal_ = 0;
}
inline ::google::protobuf::int32 ResultPlayer::heal() const {
  // @@protoc_insertion_point(field_get:ResultPlayer.Heal)
  return heal_;
}
inline void ResultPlayer::set_heal(::google::protobuf::int32 value) {
  
  heal_ = value;
  // @@protoc_insertion_point(field_set:ResultPlayer.Heal)
}

// optional int32 Damage = 8;
inline void ResultPlayer::clear_damage() {
  damage_ = 0;
}
inline ::google::protobuf::int32 ResultPlayer::damage() const {
  // @@protoc_insertion_point(field_get:ResultPlayer.Damage)
  return damage_;
}
inline void ResultPlayer::set_damage(::google::protobuf::int32 value) {
  
  damage_ = value;
  // @@protoc_insertion_point(field_set:ResultPlayer.Damage)
}

#endif  // !PROTOBUF_INLINE_NOT_IN_HEADERS
// -------------------------------------------------------------------


// @@protoc_insertion_point(namespace_scope)

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_protos_2fMsg_5fCopy_2eproto__INCLUDED