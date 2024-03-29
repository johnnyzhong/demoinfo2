// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: dota_modifiers.proto

#ifndef PROTOBUF_dota_5fmodifiers_2eproto__INCLUDED
#define PROTOBUF_dota_5fmodifiers_2eproto__INCLUDED

#include <string>

#include <google/protobuf/stubs/common.h>

#if GOOGLE_PROTOBUF_VERSION < 2004000
#error This file was generated by a newer version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please update
#error your headers.
#endif
#if 2004001 < GOOGLE_PROTOBUF_MIN_PROTOC_VERSION
#error This file was generated by an older version of protoc which is
#error incompatible with your Protocol Buffer headers.  Please
#error regenerate this file with a newer version of protoc.
#endif

#include <google/protobuf/generated_message_util.h>
#include <google/protobuf/repeated_field.h>
#include <google/protobuf/extension_set.h>
#include <google/protobuf/generated_message_reflection.h>
#include "google/protobuf/descriptor.pb.h"
#include "netmessages.pb.h"
// @@protoc_insertion_point(includes)

// Internal implementation detail -- do not call these.
void  protobuf_AddDesc_dota_5fmodifiers_2eproto();
void protobuf_AssignDesc_dota_5fmodifiers_2eproto();
void protobuf_ShutdownFile_dota_5fmodifiers_2eproto();

class CDOTAModifierBuffTableEntry;

enum DOTA_MODIFIER_ENTRY_TYPE {
  DOTA_MODIFIER_ENTRY_TYPE_ACTIVE = 1,
  DOTA_MODIFIER_ENTRY_TYPE_REMOVED = 2
};
bool DOTA_MODIFIER_ENTRY_TYPE_IsValid(int value);
const DOTA_MODIFIER_ENTRY_TYPE DOTA_MODIFIER_ENTRY_TYPE_MIN = DOTA_MODIFIER_ENTRY_TYPE_ACTIVE;
const DOTA_MODIFIER_ENTRY_TYPE DOTA_MODIFIER_ENTRY_TYPE_MAX = DOTA_MODIFIER_ENTRY_TYPE_REMOVED;
const int DOTA_MODIFIER_ENTRY_TYPE_ARRAYSIZE = DOTA_MODIFIER_ENTRY_TYPE_MAX + 1;

const ::google::protobuf::EnumDescriptor* DOTA_MODIFIER_ENTRY_TYPE_descriptor();
inline const ::std::string& DOTA_MODIFIER_ENTRY_TYPE_Name(DOTA_MODIFIER_ENTRY_TYPE value) {
  return ::google::protobuf::internal::NameOfEnum(
    DOTA_MODIFIER_ENTRY_TYPE_descriptor(), value);
}
inline bool DOTA_MODIFIER_ENTRY_TYPE_Parse(
    const ::std::string& name, DOTA_MODIFIER_ENTRY_TYPE* value) {
  return ::google::protobuf::internal::ParseNamedEnum<DOTA_MODIFIER_ENTRY_TYPE>(
    DOTA_MODIFIER_ENTRY_TYPE_descriptor(), name, value);
}
// ===================================================================

class CDOTAModifierBuffTableEntry : public ::google::protobuf::Message {
 public:
  CDOTAModifierBuffTableEntry();
  virtual ~CDOTAModifierBuffTableEntry();
  
  CDOTAModifierBuffTableEntry(const CDOTAModifierBuffTableEntry& from);
  
  inline CDOTAModifierBuffTableEntry& operator=(const CDOTAModifierBuffTableEntry& from) {
    CopyFrom(from);
    return *this;
  }
  
  inline const ::google::protobuf::UnknownFieldSet& unknown_fields() const {
    return _unknown_fields_;
  }
  
  inline ::google::protobuf::UnknownFieldSet* mutable_unknown_fields() {
    return &_unknown_fields_;
  }
  
  static const ::google::protobuf::Descriptor* descriptor();
  static const CDOTAModifierBuffTableEntry& default_instance();
  
  void Swap(CDOTAModifierBuffTableEntry* other);
  
  // implements Message ----------------------------------------------
  
  CDOTAModifierBuffTableEntry* New() const;
  void CopyFrom(const ::google::protobuf::Message& from);
  void MergeFrom(const ::google::protobuf::Message& from);
  void CopyFrom(const CDOTAModifierBuffTableEntry& from);
  void MergeFrom(const CDOTAModifierBuffTableEntry& from);
  void Clear();
  bool IsInitialized() const;
  
  int ByteSize() const;
  bool MergePartialFromCodedStream(
      ::google::protobuf::io::CodedInputStream* input);
  void SerializeWithCachedSizes(
      ::google::protobuf::io::CodedOutputStream* output) const;
  ::google::protobuf::uint8* SerializeWithCachedSizesToArray(::google::protobuf::uint8* output) const;
  int GetCachedSize() const { return _cached_size_; }
  private:
  void SharedCtor();
  void SharedDtor();
  void SetCachedSize(int size) const;
  public:
  
  ::google::protobuf::Metadata GetMetadata() const;
  
  // nested types ----------------------------------------------------
  
  // accessors -------------------------------------------------------
  
  // required .DOTA_MODIFIER_ENTRY_TYPE entry_type = 1;
  inline bool has_entry_type() const;
  inline void clear_entry_type();
  static const int kEntryTypeFieldNumber = 1;
  inline DOTA_MODIFIER_ENTRY_TYPE entry_type() const;
  inline void set_entry_type(DOTA_MODIFIER_ENTRY_TYPE value);
  
  // required int32 parent = 2;
  inline bool has_parent() const;
  inline void clear_parent();
  static const int kParentFieldNumber = 2;
  inline ::google::protobuf::int32 parent() const;
  inline void set_parent(::google::protobuf::int32 value);
  
  // required int32 index = 3;
  inline bool has_index() const;
  inline void clear_index();
  static const int kIndexFieldNumber = 3;
  inline ::google::protobuf::int32 index() const;
  inline void set_index(::google::protobuf::int32 value);
  
  // required int32 serial_num = 4;
  inline bool has_serial_num() const;
  inline void clear_serial_num();
  static const int kSerialNumFieldNumber = 4;
  inline ::google::protobuf::int32 serial_num() const;
  inline void set_serial_num(::google::protobuf::int32 value);
  
  // optional int32 name = 5;
  inline bool has_name() const;
  inline void clear_name();
  static const int kNameFieldNumber = 5;
  inline ::google::protobuf::int32 name() const;
  inline void set_name(::google::protobuf::int32 value);
  
  // optional int32 ability_level = 6;
  inline bool has_ability_level() const;
  inline void clear_ability_level();
  static const int kAbilityLevelFieldNumber = 6;
  inline ::google::protobuf::int32 ability_level() const;
  inline void set_ability_level(::google::protobuf::int32 value);
  
  // optional int32 stack_count = 7;
  inline bool has_stack_count() const;
  inline void clear_stack_count();
  static const int kStackCountFieldNumber = 7;
  inline ::google::protobuf::int32 stack_count() const;
  inline void set_stack_count(::google::protobuf::int32 value);
  
  // optional float creation_time = 8;
  inline bool has_creation_time() const;
  inline void clear_creation_time();
  static const int kCreationTimeFieldNumber = 8;
  inline float creation_time() const;
  inline void set_creation_time(float value);
  
  // optional float duration = 9 [default = -1];
  inline bool has_duration() const;
  inline void clear_duration();
  static const int kDurationFieldNumber = 9;
  inline float duration() const;
  inline void set_duration(float value);
  
  // optional int32 caster = 10;
  inline bool has_caster() const;
  inline void clear_caster();
  static const int kCasterFieldNumber = 10;
  inline ::google::protobuf::int32 caster() const;
  inline void set_caster(::google::protobuf::int32 value);
  
  // optional int32 ability = 11;
  inline bool has_ability() const;
  inline void clear_ability();
  static const int kAbilityFieldNumber = 11;
  inline ::google::protobuf::int32 ability() const;
  inline void set_ability(::google::protobuf::int32 value);
  
  // optional int32 armor = 12;
  inline bool has_armor() const;
  inline void clear_armor();
  static const int kArmorFieldNumber = 12;
  inline ::google::protobuf::int32 armor() const;
  inline void set_armor(::google::protobuf::int32 value);
  
  // optional float fade_time = 13;
  inline bool has_fade_time() const;
  inline void clear_fade_time();
  static const int kFadeTimeFieldNumber = 13;
  inline float fade_time() const;
  inline void set_fade_time(float value);
  
  // optional bool subtle = 14;
  inline bool has_subtle() const;
  inline void clear_subtle();
  static const int kSubtleFieldNumber = 14;
  inline bool subtle() const;
  inline void set_subtle(bool value);
  
  // optional float channel_time = 15;
  inline bool has_channel_time() const;
  inline void clear_channel_time();
  static const int kChannelTimeFieldNumber = 15;
  inline float channel_time() const;
  inline void set_channel_time(float value);
  
  // optional .CMsgVector v_start = 16;
  inline bool has_v_start() const;
  inline void clear_v_start();
  static const int kVStartFieldNumber = 16;
  inline const ::CMsgVector& v_start() const;
  inline ::CMsgVector* mutable_v_start();
  inline ::CMsgVector* release_v_start();
  
  // optional .CMsgVector v_end = 17;
  inline bool has_v_end() const;
  inline void clear_v_end();
  static const int kVEndFieldNumber = 17;
  inline const ::CMsgVector& v_end() const;
  inline ::CMsgVector* mutable_v_end();
  inline ::CMsgVector* release_v_end();
  
  // optional string portal_loop_appear = 18;
  inline bool has_portal_loop_appear() const;
  inline void clear_portal_loop_appear();
  static const int kPortalLoopAppearFieldNumber = 18;
  inline const ::std::string& portal_loop_appear() const;
  inline void set_portal_loop_appear(const ::std::string& value);
  inline void set_portal_loop_appear(const char* value);
  inline void set_portal_loop_appear(const char* value, size_t size);
  inline ::std::string* mutable_portal_loop_appear();
  inline ::std::string* release_portal_loop_appear();
  
  // optional string portal_loop_disappear = 19;
  inline bool has_portal_loop_disappear() const;
  inline void clear_portal_loop_disappear();
  static const int kPortalLoopDisappearFieldNumber = 19;
  inline const ::std::string& portal_loop_disappear() const;
  inline void set_portal_loop_disappear(const ::std::string& value);
  inline void set_portal_loop_disappear(const char* value);
  inline void set_portal_loop_disappear(const char* value, size_t size);
  inline ::std::string* mutable_portal_loop_disappear();
  inline ::std::string* release_portal_loop_disappear();
  
  // optional string hero_loop_appear = 20;
  inline bool has_hero_loop_appear() const;
  inline void clear_hero_loop_appear();
  static const int kHeroLoopAppearFieldNumber = 20;
  inline const ::std::string& hero_loop_appear() const;
  inline void set_hero_loop_appear(const ::std::string& value);
  inline void set_hero_loop_appear(const char* value);
  inline void set_hero_loop_appear(const char* value, size_t size);
  inline ::std::string* mutable_hero_loop_appear();
  inline ::std::string* release_hero_loop_appear();
  
  // optional string hero_loop_disappear = 21;
  inline bool has_hero_loop_disappear() const;
  inline void clear_hero_loop_disappear();
  static const int kHeroLoopDisappearFieldNumber = 21;
  inline const ::std::string& hero_loop_disappear() const;
  inline void set_hero_loop_disappear(const ::std::string& value);
  inline void set_hero_loop_disappear(const char* value);
  inline void set_hero_loop_disappear(const char* value, size_t size);
  inline ::std::string* mutable_hero_loop_disappear();
  inline ::std::string* release_hero_loop_disappear();
  
  // optional int32 movement_speed = 22;
  inline bool has_movement_speed() const;
  inline void clear_movement_speed();
  static const int kMovementSpeedFieldNumber = 22;
  inline ::google::protobuf::int32 movement_speed() const;
  inline void set_movement_speed(::google::protobuf::int32 value);
  
  // optional bool aura = 23;
  inline bool has_aura() const;
  inline void clear_aura();
  static const int kAuraFieldNumber = 23;
  inline bool aura() const;
  inline void set_aura(bool value);
  
  // @@protoc_insertion_point(class_scope:CDOTAModifierBuffTableEntry)
 private:
  inline void set_has_entry_type();
  inline void clear_has_entry_type();
  inline void set_has_parent();
  inline void clear_has_parent();
  inline void set_has_index();
  inline void clear_has_index();
  inline void set_has_serial_num();
  inline void clear_has_serial_num();
  inline void set_has_name();
  inline void clear_has_name();
  inline void set_has_ability_level();
  inline void clear_has_ability_level();
  inline void set_has_stack_count();
  inline void clear_has_stack_count();
  inline void set_has_creation_time();
  inline void clear_has_creation_time();
  inline void set_has_duration();
  inline void clear_has_duration();
  inline void set_has_caster();
  inline void clear_has_caster();
  inline void set_has_ability();
  inline void clear_has_ability();
  inline void set_has_armor();
  inline void clear_has_armor();
  inline void set_has_fade_time();
  inline void clear_has_fade_time();
  inline void set_has_subtle();
  inline void clear_has_subtle();
  inline void set_has_channel_time();
  inline void clear_has_channel_time();
  inline void set_has_v_start();
  inline void clear_has_v_start();
  inline void set_has_v_end();
  inline void clear_has_v_end();
  inline void set_has_portal_loop_appear();
  inline void clear_has_portal_loop_appear();
  inline void set_has_portal_loop_disappear();
  inline void clear_has_portal_loop_disappear();
  inline void set_has_hero_loop_appear();
  inline void clear_has_hero_loop_appear();
  inline void set_has_hero_loop_disappear();
  inline void clear_has_hero_loop_disappear();
  inline void set_has_movement_speed();
  inline void clear_has_movement_speed();
  inline void set_has_aura();
  inline void clear_has_aura();
  
  ::google::protobuf::UnknownFieldSet _unknown_fields_;
  
  int entry_type_;
  ::google::protobuf::int32 parent_;
  ::google::protobuf::int32 index_;
  ::google::protobuf::int32 serial_num_;
  ::google::protobuf::int32 name_;
  ::google::protobuf::int32 ability_level_;
  ::google::protobuf::int32 stack_count_;
  float creation_time_;
  float duration_;
  ::google::protobuf::int32 caster_;
  ::google::protobuf::int32 ability_;
  ::google::protobuf::int32 armor_;
  float fade_time_;
  float channel_time_;
  ::CMsgVector* v_start_;
  ::CMsgVector* v_end_;
  ::std::string* portal_loop_appear_;
  ::std::string* portal_loop_disappear_;
  bool subtle_;
  bool aura_;
  ::google::protobuf::int32 movement_speed_;
  ::std::string* hero_loop_appear_;
  ::std::string* hero_loop_disappear_;
  
  mutable int _cached_size_;
  ::google::protobuf::uint32 _has_bits_[(23 + 31) / 32];
  
  friend void  protobuf_AddDesc_dota_5fmodifiers_2eproto();
  friend void protobuf_AssignDesc_dota_5fmodifiers_2eproto();
  friend void protobuf_ShutdownFile_dota_5fmodifiers_2eproto();
  
  void InitAsDefaultInstance();
  static CDOTAModifierBuffTableEntry* default_instance_;
};
// ===================================================================


// ===================================================================

// CDOTAModifierBuffTableEntry

// required .DOTA_MODIFIER_ENTRY_TYPE entry_type = 1;
inline bool CDOTAModifierBuffTableEntry::has_entry_type() const {
  return (_has_bits_[0] & 0x00000001u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_entry_type() {
  _has_bits_[0] |= 0x00000001u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_entry_type() {
  _has_bits_[0] &= ~0x00000001u;
}
inline void CDOTAModifierBuffTableEntry::clear_entry_type() {
  entry_type_ = 1;
  clear_has_entry_type();
}
inline DOTA_MODIFIER_ENTRY_TYPE CDOTAModifierBuffTableEntry::entry_type() const {
  return static_cast< DOTA_MODIFIER_ENTRY_TYPE >(entry_type_);
}
inline void CDOTAModifierBuffTableEntry::set_entry_type(DOTA_MODIFIER_ENTRY_TYPE value) {
  GOOGLE_DCHECK(DOTA_MODIFIER_ENTRY_TYPE_IsValid(value));
  set_has_entry_type();
  entry_type_ = value;
}

// required int32 parent = 2;
inline bool CDOTAModifierBuffTableEntry::has_parent() const {
  return (_has_bits_[0] & 0x00000002u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_parent() {
  _has_bits_[0] |= 0x00000002u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_parent() {
  _has_bits_[0] &= ~0x00000002u;
}
inline void CDOTAModifierBuffTableEntry::clear_parent() {
  parent_ = 0;
  clear_has_parent();
}
inline ::google::protobuf::int32 CDOTAModifierBuffTableEntry::parent() const {
  return parent_;
}
inline void CDOTAModifierBuffTableEntry::set_parent(::google::protobuf::int32 value) {
  set_has_parent();
  parent_ = value;
}

// required int32 index = 3;
inline bool CDOTAModifierBuffTableEntry::has_index() const {
  return (_has_bits_[0] & 0x00000004u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_index() {
  _has_bits_[0] |= 0x00000004u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_index() {
  _has_bits_[0] &= ~0x00000004u;
}
inline void CDOTAModifierBuffTableEntry::clear_index() {
  index_ = 0;
  clear_has_index();
}
inline ::google::protobuf::int32 CDOTAModifierBuffTableEntry::index() const {
  return index_;
}
inline void CDOTAModifierBuffTableEntry::set_index(::google::protobuf::int32 value) {
  set_has_index();
  index_ = value;
}

// required int32 serial_num = 4;
inline bool CDOTAModifierBuffTableEntry::has_serial_num() const {
  return (_has_bits_[0] & 0x00000008u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_serial_num() {
  _has_bits_[0] |= 0x00000008u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_serial_num() {
  _has_bits_[0] &= ~0x00000008u;
}
inline void CDOTAModifierBuffTableEntry::clear_serial_num() {
  serial_num_ = 0;
  clear_has_serial_num();
}
inline ::google::protobuf::int32 CDOTAModifierBuffTableEntry::serial_num() const {
  return serial_num_;
}
inline void CDOTAModifierBuffTableEntry::set_serial_num(::google::protobuf::int32 value) {
  set_has_serial_num();
  serial_num_ = value;
}

// optional int32 name = 5;
inline bool CDOTAModifierBuffTableEntry::has_name() const {
  return (_has_bits_[0] & 0x00000010u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_name() {
  _has_bits_[0] |= 0x00000010u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_name() {
  _has_bits_[0] &= ~0x00000010u;
}
inline void CDOTAModifierBuffTableEntry::clear_name() {
  name_ = 0;
  clear_has_name();
}
inline ::google::protobuf::int32 CDOTAModifierBuffTableEntry::name() const {
  return name_;
}
inline void CDOTAModifierBuffTableEntry::set_name(::google::protobuf::int32 value) {
  set_has_name();
  name_ = value;
}

// optional int32 ability_level = 6;
inline bool CDOTAModifierBuffTableEntry::has_ability_level() const {
  return (_has_bits_[0] & 0x00000020u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_ability_level() {
  _has_bits_[0] |= 0x00000020u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_ability_level() {
  _has_bits_[0] &= ~0x00000020u;
}
inline void CDOTAModifierBuffTableEntry::clear_ability_level() {
  ability_level_ = 0;
  clear_has_ability_level();
}
inline ::google::protobuf::int32 CDOTAModifierBuffTableEntry::ability_level() const {
  return ability_level_;
}
inline void CDOTAModifierBuffTableEntry::set_ability_level(::google::protobuf::int32 value) {
  set_has_ability_level();
  ability_level_ = value;
}

// optional int32 stack_count = 7;
inline bool CDOTAModifierBuffTableEntry::has_stack_count() const {
  return (_has_bits_[0] & 0x00000040u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_stack_count() {
  _has_bits_[0] |= 0x00000040u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_stack_count() {
  _has_bits_[0] &= ~0x00000040u;
}
inline void CDOTAModifierBuffTableEntry::clear_stack_count() {
  stack_count_ = 0;
  clear_has_stack_count();
}
inline ::google::protobuf::int32 CDOTAModifierBuffTableEntry::stack_count() const {
  return stack_count_;
}
inline void CDOTAModifierBuffTableEntry::set_stack_count(::google::protobuf::int32 value) {
  set_has_stack_count();
  stack_count_ = value;
}

// optional float creation_time = 8;
inline bool CDOTAModifierBuffTableEntry::has_creation_time() const {
  return (_has_bits_[0] & 0x00000080u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_creation_time() {
  _has_bits_[0] |= 0x00000080u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_creation_time() {
  _has_bits_[0] &= ~0x00000080u;
}
inline void CDOTAModifierBuffTableEntry::clear_creation_time() {
  creation_time_ = 0;
  clear_has_creation_time();
}
inline float CDOTAModifierBuffTableEntry::creation_time() const {
  return creation_time_;
}
inline void CDOTAModifierBuffTableEntry::set_creation_time(float value) {
  set_has_creation_time();
  creation_time_ = value;
}

// optional float duration = 9 [default = -1];
inline bool CDOTAModifierBuffTableEntry::has_duration() const {
  return (_has_bits_[0] & 0x00000100u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_duration() {
  _has_bits_[0] |= 0x00000100u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_duration() {
  _has_bits_[0] &= ~0x00000100u;
}
inline void CDOTAModifierBuffTableEntry::clear_duration() {
  duration_ = -1;
  clear_has_duration();
}
inline float CDOTAModifierBuffTableEntry::duration() const {
  return duration_;
}
inline void CDOTAModifierBuffTableEntry::set_duration(float value) {
  set_has_duration();
  duration_ = value;
}

// optional int32 caster = 10;
inline bool CDOTAModifierBuffTableEntry::has_caster() const {
  return (_has_bits_[0] & 0x00000200u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_caster() {
  _has_bits_[0] |= 0x00000200u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_caster() {
  _has_bits_[0] &= ~0x00000200u;
}
inline void CDOTAModifierBuffTableEntry::clear_caster() {
  caster_ = 0;
  clear_has_caster();
}
inline ::google::protobuf::int32 CDOTAModifierBuffTableEntry::caster() const {
  return caster_;
}
inline void CDOTAModifierBuffTableEntry::set_caster(::google::protobuf::int32 value) {
  set_has_caster();
  caster_ = value;
}

// optional int32 ability = 11;
inline bool CDOTAModifierBuffTableEntry::has_ability() const {
  return (_has_bits_[0] & 0x00000400u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_ability() {
  _has_bits_[0] |= 0x00000400u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_ability() {
  _has_bits_[0] &= ~0x00000400u;
}
inline void CDOTAModifierBuffTableEntry::clear_ability() {
  ability_ = 0;
  clear_has_ability();
}
inline ::google::protobuf::int32 CDOTAModifierBuffTableEntry::ability() const {
  return ability_;
}
inline void CDOTAModifierBuffTableEntry::set_ability(::google::protobuf::int32 value) {
  set_has_ability();
  ability_ = value;
}

// optional int32 armor = 12;
inline bool CDOTAModifierBuffTableEntry::has_armor() const {
  return (_has_bits_[0] & 0x00000800u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_armor() {
  _has_bits_[0] |= 0x00000800u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_armor() {
  _has_bits_[0] &= ~0x00000800u;
}
inline void CDOTAModifierBuffTableEntry::clear_armor() {
  armor_ = 0;
  clear_has_armor();
}
inline ::google::protobuf::int32 CDOTAModifierBuffTableEntry::armor() const {
  return armor_;
}
inline void CDOTAModifierBuffTableEntry::set_armor(::google::protobuf::int32 value) {
  set_has_armor();
  armor_ = value;
}

// optional float fade_time = 13;
inline bool CDOTAModifierBuffTableEntry::has_fade_time() const {
  return (_has_bits_[0] & 0x00001000u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_fade_time() {
  _has_bits_[0] |= 0x00001000u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_fade_time() {
  _has_bits_[0] &= ~0x00001000u;
}
inline void CDOTAModifierBuffTableEntry::clear_fade_time() {
  fade_time_ = 0;
  clear_has_fade_time();
}
inline float CDOTAModifierBuffTableEntry::fade_time() const {
  return fade_time_;
}
inline void CDOTAModifierBuffTableEntry::set_fade_time(float value) {
  set_has_fade_time();
  fade_time_ = value;
}

// optional bool subtle = 14;
inline bool CDOTAModifierBuffTableEntry::has_subtle() const {
  return (_has_bits_[0] & 0x00002000u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_subtle() {
  _has_bits_[0] |= 0x00002000u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_subtle() {
  _has_bits_[0] &= ~0x00002000u;
}
inline void CDOTAModifierBuffTableEntry::clear_subtle() {
  subtle_ = false;
  clear_has_subtle();
}
inline bool CDOTAModifierBuffTableEntry::subtle() const {
  return subtle_;
}
inline void CDOTAModifierBuffTableEntry::set_subtle(bool value) {
  set_has_subtle();
  subtle_ = value;
}

// optional float channel_time = 15;
inline bool CDOTAModifierBuffTableEntry::has_channel_time() const {
  return (_has_bits_[0] & 0x00004000u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_channel_time() {
  _has_bits_[0] |= 0x00004000u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_channel_time() {
  _has_bits_[0] &= ~0x00004000u;
}
inline void CDOTAModifierBuffTableEntry::clear_channel_time() {
  channel_time_ = 0;
  clear_has_channel_time();
}
inline float CDOTAModifierBuffTableEntry::channel_time() const {
  return channel_time_;
}
inline void CDOTAModifierBuffTableEntry::set_channel_time(float value) {
  set_has_channel_time();
  channel_time_ = value;
}

// optional .CMsgVector v_start = 16;
inline bool CDOTAModifierBuffTableEntry::has_v_start() const {
  return (_has_bits_[0] & 0x00008000u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_v_start() {
  _has_bits_[0] |= 0x00008000u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_v_start() {
  _has_bits_[0] &= ~0x00008000u;
}
inline void CDOTAModifierBuffTableEntry::clear_v_start() {
  if (v_start_ != NULL) v_start_->::CMsgVector::Clear();
  clear_has_v_start();
}
inline const ::CMsgVector& CDOTAModifierBuffTableEntry::v_start() const {
  return v_start_ != NULL ? *v_start_ : *default_instance_->v_start_;
}
inline ::CMsgVector* CDOTAModifierBuffTableEntry::mutable_v_start() {
  set_has_v_start();
  if (v_start_ == NULL) v_start_ = new ::CMsgVector;
  return v_start_;
}
inline ::CMsgVector* CDOTAModifierBuffTableEntry::release_v_start() {
  clear_has_v_start();
  ::CMsgVector* temp = v_start_;
  v_start_ = NULL;
  return temp;
}

// optional .CMsgVector v_end = 17;
inline bool CDOTAModifierBuffTableEntry::has_v_end() const {
  return (_has_bits_[0] & 0x00010000u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_v_end() {
  _has_bits_[0] |= 0x00010000u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_v_end() {
  _has_bits_[0] &= ~0x00010000u;
}
inline void CDOTAModifierBuffTableEntry::clear_v_end() {
  if (v_end_ != NULL) v_end_->::CMsgVector::Clear();
  clear_has_v_end();
}
inline const ::CMsgVector& CDOTAModifierBuffTableEntry::v_end() const {
  return v_end_ != NULL ? *v_end_ : *default_instance_->v_end_;
}
inline ::CMsgVector* CDOTAModifierBuffTableEntry::mutable_v_end() {
  set_has_v_end();
  if (v_end_ == NULL) v_end_ = new ::CMsgVector;
  return v_end_;
}
inline ::CMsgVector* CDOTAModifierBuffTableEntry::release_v_end() {
  clear_has_v_end();
  ::CMsgVector* temp = v_end_;
  v_end_ = NULL;
  return temp;
}

// optional string portal_loop_appear = 18;
inline bool CDOTAModifierBuffTableEntry::has_portal_loop_appear() const {
  return (_has_bits_[0] & 0x00020000u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_portal_loop_appear() {
  _has_bits_[0] |= 0x00020000u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_portal_loop_appear() {
  _has_bits_[0] &= ~0x00020000u;
}
inline void CDOTAModifierBuffTableEntry::clear_portal_loop_appear() {
  if (portal_loop_appear_ != &::google::protobuf::internal::kEmptyString) {
    portal_loop_appear_->clear();
  }
  clear_has_portal_loop_appear();
}
inline const ::std::string& CDOTAModifierBuffTableEntry::portal_loop_appear() const {
  return *portal_loop_appear_;
}
inline void CDOTAModifierBuffTableEntry::set_portal_loop_appear(const ::std::string& value) {
  set_has_portal_loop_appear();
  if (portal_loop_appear_ == &::google::protobuf::internal::kEmptyString) {
    portal_loop_appear_ = new ::std::string;
  }
  portal_loop_appear_->assign(value);
}
inline void CDOTAModifierBuffTableEntry::set_portal_loop_appear(const char* value) {
  set_has_portal_loop_appear();
  if (portal_loop_appear_ == &::google::protobuf::internal::kEmptyString) {
    portal_loop_appear_ = new ::std::string;
  }
  portal_loop_appear_->assign(value);
}
inline void CDOTAModifierBuffTableEntry::set_portal_loop_appear(const char* value, size_t size) {
  set_has_portal_loop_appear();
  if (portal_loop_appear_ == &::google::protobuf::internal::kEmptyString) {
    portal_loop_appear_ = new ::std::string;
  }
  portal_loop_appear_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CDOTAModifierBuffTableEntry::mutable_portal_loop_appear() {
  set_has_portal_loop_appear();
  if (portal_loop_appear_ == &::google::protobuf::internal::kEmptyString) {
    portal_loop_appear_ = new ::std::string;
  }
  return portal_loop_appear_;
}
inline ::std::string* CDOTAModifierBuffTableEntry::release_portal_loop_appear() {
  clear_has_portal_loop_appear();
  if (portal_loop_appear_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = portal_loop_appear_;
    portal_loop_appear_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string portal_loop_disappear = 19;
inline bool CDOTAModifierBuffTableEntry::has_portal_loop_disappear() const {
  return (_has_bits_[0] & 0x00040000u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_portal_loop_disappear() {
  _has_bits_[0] |= 0x00040000u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_portal_loop_disappear() {
  _has_bits_[0] &= ~0x00040000u;
}
inline void CDOTAModifierBuffTableEntry::clear_portal_loop_disappear() {
  if (portal_loop_disappear_ != &::google::protobuf::internal::kEmptyString) {
    portal_loop_disappear_->clear();
  }
  clear_has_portal_loop_disappear();
}
inline const ::std::string& CDOTAModifierBuffTableEntry::portal_loop_disappear() const {
  return *portal_loop_disappear_;
}
inline void CDOTAModifierBuffTableEntry::set_portal_loop_disappear(const ::std::string& value) {
  set_has_portal_loop_disappear();
  if (portal_loop_disappear_ == &::google::protobuf::internal::kEmptyString) {
    portal_loop_disappear_ = new ::std::string;
  }
  portal_loop_disappear_->assign(value);
}
inline void CDOTAModifierBuffTableEntry::set_portal_loop_disappear(const char* value) {
  set_has_portal_loop_disappear();
  if (portal_loop_disappear_ == &::google::protobuf::internal::kEmptyString) {
    portal_loop_disappear_ = new ::std::string;
  }
  portal_loop_disappear_->assign(value);
}
inline void CDOTAModifierBuffTableEntry::set_portal_loop_disappear(const char* value, size_t size) {
  set_has_portal_loop_disappear();
  if (portal_loop_disappear_ == &::google::protobuf::internal::kEmptyString) {
    portal_loop_disappear_ = new ::std::string;
  }
  portal_loop_disappear_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CDOTAModifierBuffTableEntry::mutable_portal_loop_disappear() {
  set_has_portal_loop_disappear();
  if (portal_loop_disappear_ == &::google::protobuf::internal::kEmptyString) {
    portal_loop_disappear_ = new ::std::string;
  }
  return portal_loop_disappear_;
}
inline ::std::string* CDOTAModifierBuffTableEntry::release_portal_loop_disappear() {
  clear_has_portal_loop_disappear();
  if (portal_loop_disappear_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = portal_loop_disappear_;
    portal_loop_disappear_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string hero_loop_appear = 20;
inline bool CDOTAModifierBuffTableEntry::has_hero_loop_appear() const {
  return (_has_bits_[0] & 0x00080000u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_hero_loop_appear() {
  _has_bits_[0] |= 0x00080000u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_hero_loop_appear() {
  _has_bits_[0] &= ~0x00080000u;
}
inline void CDOTAModifierBuffTableEntry::clear_hero_loop_appear() {
  if (hero_loop_appear_ != &::google::protobuf::internal::kEmptyString) {
    hero_loop_appear_->clear();
  }
  clear_has_hero_loop_appear();
}
inline const ::std::string& CDOTAModifierBuffTableEntry::hero_loop_appear() const {
  return *hero_loop_appear_;
}
inline void CDOTAModifierBuffTableEntry::set_hero_loop_appear(const ::std::string& value) {
  set_has_hero_loop_appear();
  if (hero_loop_appear_ == &::google::protobuf::internal::kEmptyString) {
    hero_loop_appear_ = new ::std::string;
  }
  hero_loop_appear_->assign(value);
}
inline void CDOTAModifierBuffTableEntry::set_hero_loop_appear(const char* value) {
  set_has_hero_loop_appear();
  if (hero_loop_appear_ == &::google::protobuf::internal::kEmptyString) {
    hero_loop_appear_ = new ::std::string;
  }
  hero_loop_appear_->assign(value);
}
inline void CDOTAModifierBuffTableEntry::set_hero_loop_appear(const char* value, size_t size) {
  set_has_hero_loop_appear();
  if (hero_loop_appear_ == &::google::protobuf::internal::kEmptyString) {
    hero_loop_appear_ = new ::std::string;
  }
  hero_loop_appear_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CDOTAModifierBuffTableEntry::mutable_hero_loop_appear() {
  set_has_hero_loop_appear();
  if (hero_loop_appear_ == &::google::protobuf::internal::kEmptyString) {
    hero_loop_appear_ = new ::std::string;
  }
  return hero_loop_appear_;
}
inline ::std::string* CDOTAModifierBuffTableEntry::release_hero_loop_appear() {
  clear_has_hero_loop_appear();
  if (hero_loop_appear_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = hero_loop_appear_;
    hero_loop_appear_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional string hero_loop_disappear = 21;
inline bool CDOTAModifierBuffTableEntry::has_hero_loop_disappear() const {
  return (_has_bits_[0] & 0x00100000u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_hero_loop_disappear() {
  _has_bits_[0] |= 0x00100000u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_hero_loop_disappear() {
  _has_bits_[0] &= ~0x00100000u;
}
inline void CDOTAModifierBuffTableEntry::clear_hero_loop_disappear() {
  if (hero_loop_disappear_ != &::google::protobuf::internal::kEmptyString) {
    hero_loop_disappear_->clear();
  }
  clear_has_hero_loop_disappear();
}
inline const ::std::string& CDOTAModifierBuffTableEntry::hero_loop_disappear() const {
  return *hero_loop_disappear_;
}
inline void CDOTAModifierBuffTableEntry::set_hero_loop_disappear(const ::std::string& value) {
  set_has_hero_loop_disappear();
  if (hero_loop_disappear_ == &::google::protobuf::internal::kEmptyString) {
    hero_loop_disappear_ = new ::std::string;
  }
  hero_loop_disappear_->assign(value);
}
inline void CDOTAModifierBuffTableEntry::set_hero_loop_disappear(const char* value) {
  set_has_hero_loop_disappear();
  if (hero_loop_disappear_ == &::google::protobuf::internal::kEmptyString) {
    hero_loop_disappear_ = new ::std::string;
  }
  hero_loop_disappear_->assign(value);
}
inline void CDOTAModifierBuffTableEntry::set_hero_loop_disappear(const char* value, size_t size) {
  set_has_hero_loop_disappear();
  if (hero_loop_disappear_ == &::google::protobuf::internal::kEmptyString) {
    hero_loop_disappear_ = new ::std::string;
  }
  hero_loop_disappear_->assign(reinterpret_cast<const char*>(value), size);
}
inline ::std::string* CDOTAModifierBuffTableEntry::mutable_hero_loop_disappear() {
  set_has_hero_loop_disappear();
  if (hero_loop_disappear_ == &::google::protobuf::internal::kEmptyString) {
    hero_loop_disappear_ = new ::std::string;
  }
  return hero_loop_disappear_;
}
inline ::std::string* CDOTAModifierBuffTableEntry::release_hero_loop_disappear() {
  clear_has_hero_loop_disappear();
  if (hero_loop_disappear_ == &::google::protobuf::internal::kEmptyString) {
    return NULL;
  } else {
    ::std::string* temp = hero_loop_disappear_;
    hero_loop_disappear_ = const_cast< ::std::string*>(&::google::protobuf::internal::kEmptyString);
    return temp;
  }
}

// optional int32 movement_speed = 22;
inline bool CDOTAModifierBuffTableEntry::has_movement_speed() const {
  return (_has_bits_[0] & 0x00200000u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_movement_speed() {
  _has_bits_[0] |= 0x00200000u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_movement_speed() {
  _has_bits_[0] &= ~0x00200000u;
}
inline void CDOTAModifierBuffTableEntry::clear_movement_speed() {
  movement_speed_ = 0;
  clear_has_movement_speed();
}
inline ::google::protobuf::int32 CDOTAModifierBuffTableEntry::movement_speed() const {
  return movement_speed_;
}
inline void CDOTAModifierBuffTableEntry::set_movement_speed(::google::protobuf::int32 value) {
  set_has_movement_speed();
  movement_speed_ = value;
}

// optional bool aura = 23;
inline bool CDOTAModifierBuffTableEntry::has_aura() const {
  return (_has_bits_[0] & 0x00400000u) != 0;
}
inline void CDOTAModifierBuffTableEntry::set_has_aura() {
  _has_bits_[0] |= 0x00400000u;
}
inline void CDOTAModifierBuffTableEntry::clear_has_aura() {
  _has_bits_[0] &= ~0x00400000u;
}
inline void CDOTAModifierBuffTableEntry::clear_aura() {
  aura_ = false;
  clear_has_aura();
}
inline bool CDOTAModifierBuffTableEntry::aura() const {
  return aura_;
}
inline void CDOTAModifierBuffTableEntry::set_aura(bool value) {
  set_has_aura();
  aura_ = value;
}


// @@protoc_insertion_point(namespace_scope)

#ifndef SWIG
namespace google {
namespace protobuf {

template <>
inline const EnumDescriptor* GetEnumDescriptor< DOTA_MODIFIER_ENTRY_TYPE>() {
  return DOTA_MODIFIER_ENTRY_TYPE_descriptor();
}

}  // namespace google
}  // namespace protobuf
#endif  // SWIG

// @@protoc_insertion_point(global_scope)

#endif  // PROTOBUF_dota_5fmodifiers_2eproto__INCLUDED
