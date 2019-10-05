// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: Segment.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 7000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif


namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(c88983dcd17779c5);
CAPNP_DECLARE_SCHEMA(f316817c9a7a16dc);
CAPNP_DECLARE_SCHEMA(acb3565e3596cf80);

}  // namespace schemas
}  // namespace capnp


struct InSynapseProto {
  InSynapseProto() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(c88983dcd17779c5, 1, 0)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct SegmentProto {
  SegmentProto() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(f316817c9a7a16dc, 4, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

struct CStateProto {
  CStateProto() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(acb3565e3596cf80, 1, 2)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class InSynapseProto::Reader {
public:
  typedef InSynapseProto Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::uint32_t getSrcCellIdx() const;

  inline float getPermanence() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class InSynapseProto::Builder {
public:
  typedef InSynapseProto Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::uint32_t getSrcCellIdx();
  inline void setSrcCellIdx( ::uint32_t value);

  inline float getPermanence();
  inline void setPermanence(float value);

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class InSynapseProto::Pipeline {
public:
  typedef InSynapseProto Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class SegmentProto::Reader {
public:
  typedef SegmentProto Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline bool getSeqSegFlag() const;

  inline float getFrequency() const;

  inline  ::uint32_t getNConnected() const;

  inline  ::uint32_t getTotalActivations() const;

  inline  ::uint32_t getPositiveActivations() const;

  inline  ::uint32_t getLastActiveIteration() const;

  inline float getLastPosDutyCycle() const;

  inline  ::uint32_t getLastPosDutyCycleIteration() const;

  inline bool hasSynapses() const;
  inline  ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>::Reader getSynapses() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class SegmentProto::Builder {
public:
  typedef SegmentProto Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline bool getSeqSegFlag();
  inline void setSeqSegFlag(bool value);

  inline float getFrequency();
  inline void setFrequency(float value);

  inline  ::uint32_t getNConnected();
  inline void setNConnected( ::uint32_t value);

  inline  ::uint32_t getTotalActivations();
  inline void setTotalActivations( ::uint32_t value);

  inline  ::uint32_t getPositiveActivations();
  inline void setPositiveActivations( ::uint32_t value);

  inline  ::uint32_t getLastActiveIteration();
  inline void setLastActiveIteration( ::uint32_t value);

  inline float getLastPosDutyCycle();
  inline void setLastPosDutyCycle(float value);

  inline  ::uint32_t getLastPosDutyCycleIteration();
  inline void setLastPosDutyCycleIteration( ::uint32_t value);

  inline bool hasSynapses();
  inline  ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>::Builder getSynapses();
  inline void setSynapses( ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>::Reader value);
  inline  ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>::Builder initSynapses(unsigned int size);
  inline void adoptSynapses(::capnp::Orphan< ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>> disownSynapses();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class SegmentProto::Pipeline {
public:
  typedef SegmentProto Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

class CStateProto::Reader {
public:
  typedef CStateProto Reads;

  Reader() = default;
  inline explicit Reader(::capnp::_::StructReader base): _reader(base) {}

  inline ::capnp::MessageSize totalSize() const {
    return _reader.totalSize().asPublic();
  }

#if !CAPNP_LITE
  inline ::kj::StringTree toString() const {
    return ::capnp::_::structString(_reader, *_capnpPrivate::brand());
  }
#endif  // !CAPNP_LITE

  inline  ::uint16_t getVersion() const;

  inline bool getFMemoryAllocatedByPython() const;

  inline bool hasPData() const;
  inline  ::capnp::Data::Reader getPData() const;

  inline  ::uint32_t getCountOn() const;

  inline bool hasCellsOn() const;
  inline  ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>::Reader getCellsOn() const;

private:
  ::capnp::_::StructReader _reader;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::List;
  friend class ::capnp::MessageBuilder;
  friend class ::capnp::Orphanage;
};

class CStateProto::Builder {
public:
  typedef CStateProto Builds;

  Builder() = delete;  // Deleted to discourage incorrect usage.
                       // You can explicitly initialize to nullptr instead.
  inline Builder(decltype(nullptr)) {}
  inline explicit Builder(::capnp::_::StructBuilder base): _builder(base) {}
  inline operator Reader() const { return Reader(_builder.asReader()); }
  inline Reader asReader() const { return *this; }

  inline ::capnp::MessageSize totalSize() const { return asReader().totalSize(); }
#if !CAPNP_LITE
  inline ::kj::StringTree toString() const { return asReader().toString(); }
#endif  // !CAPNP_LITE

  inline  ::uint16_t getVersion();
  inline void setVersion( ::uint16_t value);

  inline bool getFMemoryAllocatedByPython();
  inline void setFMemoryAllocatedByPython(bool value);

  inline bool hasPData();
  inline  ::capnp::Data::Builder getPData();
  inline void setPData( ::capnp::Data::Reader value);
  inline  ::capnp::Data::Builder initPData(unsigned int size);
  inline void adoptPData(::capnp::Orphan< ::capnp::Data>&& value);
  inline ::capnp::Orphan< ::capnp::Data> disownPData();

  inline  ::uint32_t getCountOn();
  inline void setCountOn( ::uint32_t value);

  inline bool hasCellsOn();
  inline  ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>::Builder getCellsOn();
  inline void setCellsOn( ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>::Reader value);
  inline void setCellsOn(::kj::ArrayPtr<const  ::uint32_t> value);
  inline  ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>::Builder initCellsOn(unsigned int size);
  inline void adoptCellsOn(::capnp::Orphan< ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>> disownCellsOn();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class CStateProto::Pipeline {
public:
  typedef CStateProto Pipelines;

  inline Pipeline(decltype(nullptr)): _typeless(nullptr) {}
  inline explicit Pipeline(::capnp::AnyPointer::Pipeline&& typeless)
      : _typeless(kj::mv(typeless)) {}

private:
  ::capnp::AnyPointer::Pipeline _typeless;
  friend class ::capnp::PipelineHook;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
};
#endif  // !CAPNP_LITE

// =======================================================================================

inline  ::uint32_t InSynapseProto::Reader::getSrcCellIdx() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t InSynapseProto::Builder::getSrcCellIdx() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void InSynapseProto::Builder::setSrcCellIdx( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline float InSynapseProto::Reader::getPermanence() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline float InSynapseProto::Builder::getPermanence() {
  return _builder.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void InSynapseProto::Builder::setPermanence(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline bool SegmentProto::Reader::getSeqSegFlag() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline bool SegmentProto::Builder::getSeqSegFlag() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void SegmentProto::Builder::setSeqSegFlag(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline float SegmentProto::Reader::getFrequency() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline float SegmentProto::Builder::getFrequency() {
  return _builder.getDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void SegmentProto::Builder::setFrequency(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t SegmentProto::Reader::getNConnected() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t SegmentProto::Builder::getNConnected() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS);
}
inline void SegmentProto::Builder::setNConnected( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<2>() * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t SegmentProto::Reader::getTotalActivations() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t SegmentProto::Builder::getTotalActivations() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS);
}
inline void SegmentProto::Builder::setTotalActivations( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<3>() * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t SegmentProto::Reader::getPositiveActivations() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t SegmentProto::Builder::getPositiveActivations() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS);
}
inline void SegmentProto::Builder::setPositiveActivations( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<4>() * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t SegmentProto::Reader::getLastActiveIteration() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t SegmentProto::Builder::getLastActiveIteration() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS);
}
inline void SegmentProto::Builder::setLastActiveIteration( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<5>() * ::capnp::ELEMENTS, value);
}

inline float SegmentProto::Reader::getLastPosDutyCycle() const {
  return _reader.getDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}

inline float SegmentProto::Builder::getLastPosDutyCycle() {
  return _builder.getDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS);
}
inline void SegmentProto::Builder::setLastPosDutyCycle(float value) {
  _builder.setDataField<float>(
      ::capnp::bounded<6>() * ::capnp::ELEMENTS, value);
}

inline  ::uint32_t SegmentProto::Reader::getLastPosDutyCycleIteration() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t SegmentProto::Builder::getLastPosDutyCycleIteration() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS);
}
inline void SegmentProto::Builder::setLastPosDutyCycleIteration( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<7>() * ::capnp::ELEMENTS, value);
}

inline bool SegmentProto::Reader::hasSynapses() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool SegmentProto::Builder::hasSynapses() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>::Reader SegmentProto::Reader::getSynapses() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>::Builder SegmentProto::Builder::getSynapses() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void SegmentProto::Builder::setSynapses( ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>::Builder SegmentProto::Builder::initSynapses(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void SegmentProto::Builder::adoptSynapses(
    ::capnp::Orphan< ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>> SegmentProto::Builder::disownSynapses() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::InSynapseProto,  ::capnp::Kind::STRUCT>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline  ::uint16_t CStateProto::Reader::getVersion() const {
  return _reader.getDataField< ::uint16_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}

inline  ::uint16_t CStateProto::Builder::getVersion() {
  return _builder.getDataField< ::uint16_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS);
}
inline void CStateProto::Builder::setVersion( ::uint16_t value) {
  _builder.setDataField< ::uint16_t>(
      ::capnp::bounded<0>() * ::capnp::ELEMENTS, value);
}

inline bool CStateProto::Reader::getFMemoryAllocatedByPython() const {
  return _reader.getDataField<bool>(
      ::capnp::bounded<16>() * ::capnp::ELEMENTS);
}

inline bool CStateProto::Builder::getFMemoryAllocatedByPython() {
  return _builder.getDataField<bool>(
      ::capnp::bounded<16>() * ::capnp::ELEMENTS);
}
inline void CStateProto::Builder::setFMemoryAllocatedByPython(bool value) {
  _builder.setDataField<bool>(
      ::capnp::bounded<16>() * ::capnp::ELEMENTS, value);
}

inline bool CStateProto::Reader::hasPData() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool CStateProto::Builder::hasPData() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::Data::Reader CStateProto::Reader::getPData() const {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::Data::Builder CStateProto::Builder::getPData() {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void CStateProto::Builder::setPData( ::capnp::Data::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::Data>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::Data::Builder CStateProto::Builder::initPData(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void CStateProto::Builder::adoptPData(
    ::capnp::Orphan< ::capnp::Data>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::Data>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::Data> CStateProto::Builder::disownPData() {
  return ::capnp::_::PointerHelpers< ::capnp::Data>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

inline  ::uint32_t CStateProto::Reader::getCountOn() const {
  return _reader.getDataField< ::uint32_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}

inline  ::uint32_t CStateProto::Builder::getCountOn() {
  return _builder.getDataField< ::uint32_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS);
}
inline void CStateProto::Builder::setCountOn( ::uint32_t value) {
  _builder.setDataField< ::uint32_t>(
      ::capnp::bounded<1>() * ::capnp::ELEMENTS, value);
}

inline bool CStateProto::Reader::hasCellsOn() const {
  return !_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline bool CStateProto::Builder::hasCellsOn() {
  return !_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>::Reader CStateProto::Reader::getCellsOn() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>>::get(_reader.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>::Builder CStateProto::Builder::getCellsOn() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>>::get(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}
inline void CStateProto::Builder::setCellsOn( ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline void CStateProto::Builder::setCellsOn(::kj::ArrayPtr<const  ::uint32_t> value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>>::set(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>::Builder CStateProto::Builder::initCellsOn(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>>::init(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), size);
}
inline void CStateProto::Builder::adoptCellsOn(
    ::capnp::Orphan< ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>>::adopt(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>> CStateProto::Builder::disownCellsOn() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::uint32_t,  ::capnp::Kind::PRIMITIVE>>::disown(_builder.getPointerField(
      ::capnp::bounded<1>() * ::capnp::POINTERS));
}

