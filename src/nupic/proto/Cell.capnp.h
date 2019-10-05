// Generated by Cap'n Proto compiler, DO NOT EDIT
// source: Cell.capnp

#pragma once

#include <capnp/generated-header-support.h>
#include <kj/windows-sanity.h>

#if CAPNP_VERSION != 7000
#error "Version mismatch between generated code and library headers.  You must use the same version of the Cap'n Proto compiler and library."
#endif

#include <nupic/proto/Segment.capnp.h>

namespace capnp {
namespace schemas {

CAPNP_DECLARE_SCHEMA(f3b4187a547c49ed);

}  // namespace schemas
}  // namespace capnp


struct CellProto {
  CellProto() = delete;

  class Reader;
  class Builder;
  class Pipeline;

  struct _capnpPrivate {
    CAPNP_DECLARE_STRUCT_HEADER(f3b4187a547c49ed, 0, 1)
    #if !CAPNP_LITE
    static constexpr ::capnp::_::RawBrandedSchema const* brand() { return &schema->defaultBrand; }
    #endif  // !CAPNP_LITE
  };
};

// =======================================================================================

class CellProto::Reader {
public:
  typedef CellProto Reads;

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

  inline bool hasSegments() const;
  inline  ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>::Reader getSegments() const;

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

class CellProto::Builder {
public:
  typedef CellProto Builds;

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

  inline bool hasSegments();
  inline  ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>::Builder getSegments();
  inline void setSegments( ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>::Reader value);
  inline  ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>::Builder initSegments(unsigned int size);
  inline void adoptSegments(::capnp::Orphan< ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>>&& value);
  inline ::capnp::Orphan< ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>> disownSegments();

private:
  ::capnp::_::StructBuilder _builder;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::ToDynamic_;
  friend class ::capnp::Orphanage;
  template <typename, ::capnp::Kind>
  friend struct ::capnp::_::PointerHelpers;
};

#if !CAPNP_LITE
class CellProto::Pipeline {
public:
  typedef CellProto Pipelines;

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

inline bool CellProto::Reader::hasSegments() const {
  return !_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline bool CellProto::Builder::hasSegments() {
  return !_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS).isNull();
}
inline  ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>::Reader CellProto::Reader::getSegments() const {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>>::get(_reader.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline  ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>::Builder CellProto::Builder::getSegments() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>>::get(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}
inline void CellProto::Builder::setSegments( ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>::Reader value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>>::set(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), value);
}
inline  ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>::Builder CellProto::Builder::initSegments(unsigned int size) {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>>::init(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), size);
}
inline void CellProto::Builder::adoptSegments(
    ::capnp::Orphan< ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>>&& value) {
  ::capnp::_::PointerHelpers< ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>>::adopt(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS), kj::mv(value));
}
inline ::capnp::Orphan< ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>> CellProto::Builder::disownSegments() {
  return ::capnp::_::PointerHelpers< ::capnp::List< ::SegmentProto,  ::capnp::Kind::STRUCT>>::disown(_builder.getPointerField(
      ::capnp::bounded<0>() * ::capnp::POINTERS));
}

