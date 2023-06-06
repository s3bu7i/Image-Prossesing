/*===- TableGen'erated file -------------------------------------*- C++ -*-===*\
|*                                                                            *|
|* Op Declarations                                                            *|
|*                                                                            *|
|* Automatically generated file, do not edit!                                 *|
|*                                                                            *|
\*===----------------------------------------------------------------------===*/

#if defined(GET_OP_CLASSES) || defined(GET_OP_FWD_DEFINES)
#undef GET_OP_FWD_DEFINES
namespace mlir {
namespace acc {
class DataOp;
} // namespace acc
} // namespace mlir
namespace mlir {
namespace acc {
class EnterDataOp;
} // namespace acc
} // namespace mlir
namespace mlir {
namespace acc {
class ExitDataOp;
} // namespace acc
} // namespace mlir
namespace mlir {
namespace acc {
class InitOp;
} // namespace acc
} // namespace mlir
namespace mlir {
namespace acc {
class LoopOp;
} // namespace acc
} // namespace mlir
namespace mlir {
namespace acc {
class ParallelOp;
} // namespace acc
} // namespace mlir
namespace mlir {
namespace acc {
class ShutdownOp;
} // namespace acc
} // namespace mlir
namespace mlir {
namespace acc {
class TerminatorOp;
} // namespace acc
} // namespace mlir
namespace mlir {
namespace acc {
class UpdateOp;
} // namespace acc
} // namespace mlir
namespace mlir {
namespace acc {
class WaitOp;
} // namespace acc
} // namespace mlir
namespace mlir {
namespace acc {
class YieldOp;
} // namespace acc
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace acc {

//===----------------------------------------------------------------------===//
// ::mlir::acc::DataOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class DataOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  DataOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::acc::ClauseDefaultValueAttr getDefaultAttrAttr();
  ::std::optional<::mlir::acc::ClauseDefaultValue> getDefaultAttr();
  ::mlir::Region &getRegion();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class DataOpGenericAdaptor : public detail::DataOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::DataOpGenericAdaptorBase;
public:
  DataOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getIfCond() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getCopyOperands() {
    return getODSOperands(1);
  }

  RangeT getCopyinOperands() {
    return getODSOperands(2);
  }

  RangeT getCopyinReadonlyOperands() {
    return getODSOperands(3);
  }

  RangeT getCopyoutOperands() {
    return getODSOperands(4);
  }

  RangeT getCopyoutZeroOperands() {
    return getODSOperands(5);
  }

  RangeT getCreateOperands() {
    return getODSOperands(6);
  }

  RangeT getCreateZeroOperands() {
    return getODSOperands(7);
  }

  RangeT getNoCreateOperands() {
    return getODSOperands(8);
  }

  RangeT getPresentOperands() {
    return getODSOperands(9);
  }

  RangeT getDeviceptrOperands() {
    return getODSOperands(10);
  }

  RangeT getAttachOperands() {
    return getODSOperands(11);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class DataOpAdaptor : public DataOpGenericAdaptor<::mlir::ValueRange> {
public:
  using DataOpGenericAdaptor::DataOpGenericAdaptor;
  DataOpAdaptor(DataOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class DataOp : public ::mlir::Op<DataOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = DataOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = DataOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("defaultAttr"), ::llvm::StringRef("operand_segment_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getDefaultAttrAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getDefaultAttrAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("acc.data");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getIfCond();
  ::mlir::Operation::operand_range getCopyOperands();
  ::mlir::Operation::operand_range getCopyinOperands();
  ::mlir::Operation::operand_range getCopyinReadonlyOperands();
  ::mlir::Operation::operand_range getCopyoutOperands();
  ::mlir::Operation::operand_range getCopyoutZeroOperands();
  ::mlir::Operation::operand_range getCreateOperands();
  ::mlir::Operation::operand_range getCreateZeroOperands();
  ::mlir::Operation::operand_range getNoCreateOperands();
  ::mlir::Operation::operand_range getPresentOperands();
  ::mlir::Operation::operand_range getDeviceptrOperands();
  ::mlir::Operation::operand_range getAttachOperands();
  ::mlir::MutableOperandRange getIfCondMutable();
  ::mlir::MutableOperandRange getCopyOperandsMutable();
  ::mlir::MutableOperandRange getCopyinOperandsMutable();
  ::mlir::MutableOperandRange getCopyinReadonlyOperandsMutable();
  ::mlir::MutableOperandRange getCopyoutOperandsMutable();
  ::mlir::MutableOperandRange getCopyoutZeroOperandsMutable();
  ::mlir::MutableOperandRange getCreateOperandsMutable();
  ::mlir::MutableOperandRange getCreateZeroOperandsMutable();
  ::mlir::MutableOperandRange getNoCreateOperandsMutable();
  ::mlir::MutableOperandRange getPresentOperandsMutable();
  ::mlir::MutableOperandRange getDeviceptrOperandsMutable();
  ::mlir::MutableOperandRange getAttachOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getRegion();
  ::mlir::acc::ClauseDefaultValueAttr getDefaultAttrAttr();
  ::std::optional<::mlir::acc::ClauseDefaultValue> getDefaultAttr();
  void setDefaultAttrAttr(::mlir::acc::ClauseDefaultValueAttr attr);
  void setDefaultAttr(::std::optional<::mlir::acc::ClauseDefaultValue> attrValue);
  ::mlir::Attribute removeDefaultAttrAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value ifCond, ::mlir::ValueRange copyOperands, ::mlir::ValueRange copyinOperands, ::mlir::ValueRange copyinReadonlyOperands, ::mlir::ValueRange copyoutOperands, ::mlir::ValueRange copyoutZeroOperands, ::mlir::ValueRange createOperands, ::mlir::ValueRange createZeroOperands, ::mlir::ValueRange noCreateOperands, ::mlir::ValueRange presentOperands, ::mlir::ValueRange deviceptrOperands, ::mlir::ValueRange attachOperands, /*optional*/::mlir::acc::ClauseDefaultValueAttr defaultAttr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ifCond, ::mlir::ValueRange copyOperands, ::mlir::ValueRange copyinOperands, ::mlir::ValueRange copyinReadonlyOperands, ::mlir::ValueRange copyoutOperands, ::mlir::ValueRange copyoutZeroOperands, ::mlir::ValueRange createOperands, ::mlir::ValueRange createZeroOperands, ::mlir::ValueRange noCreateOperands, ::mlir::ValueRange presentOperands, ::mlir::ValueRange deviceptrOperands, ::mlir::ValueRange attachOperands, /*optional*/::mlir::acc::ClauseDefaultValueAttr defaultAttr);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  /// The number of data operands.
  unsigned getNumDataOperands();

  /// The i-th data operand passed.
  Value getDataOperand(unsigned i);
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::DataOp)

namespace mlir {
namespace acc {

//===----------------------------------------------------------------------===//
// ::mlir::acc::EnterDataOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class EnterDataOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  EnterDataOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getAsyncAttr();
  bool getAsync();
  ::mlir::UnitAttr getWaitAttr();
  bool getWait();
};
} // namespace detail
template <typename RangeT>
class EnterDataOpGenericAdaptor : public detail::EnterDataOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::EnterDataOpGenericAdaptorBase;
public:
  EnterDataOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getIfCond() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAsyncOperand() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getWaitDevnum() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getWaitOperands() {
    return getODSOperands(3);
  }

  RangeT getCopyinOperands() {
    return getODSOperands(4);
  }

  RangeT getCreateOperands() {
    return getODSOperands(5);
  }

  RangeT getCreateZeroOperands() {
    return getODSOperands(6);
  }

  RangeT getAttachOperands() {
    return getODSOperands(7);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class EnterDataOpAdaptor : public EnterDataOpGenericAdaptor<::mlir::ValueRange> {
public:
  using EnterDataOpGenericAdaptor::EnterDataOpGenericAdaptor;
  EnterDataOpAdaptor(EnterDataOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class EnterDataOp : public ::mlir::Op<EnterDataOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = EnterDataOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = EnterDataOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("async"), ::llvm::StringRef("operand_segment_sizes"), ::llvm::StringRef("wait")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAsyncAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAsyncAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getWaitAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getWaitAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("acc.enter_data");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getIfCond();
  ::mlir::Value getAsyncOperand();
  ::mlir::Value getWaitDevnum();
  ::mlir::Operation::operand_range getWaitOperands();
  ::mlir::Operation::operand_range getCopyinOperands();
  ::mlir::Operation::operand_range getCreateOperands();
  ::mlir::Operation::operand_range getCreateZeroOperands();
  ::mlir::Operation::operand_range getAttachOperands();
  ::mlir::MutableOperandRange getIfCondMutable();
  ::mlir::MutableOperandRange getAsyncOperandMutable();
  ::mlir::MutableOperandRange getWaitDevnumMutable();
  ::mlir::MutableOperandRange getWaitOperandsMutable();
  ::mlir::MutableOperandRange getCopyinOperandsMutable();
  ::mlir::MutableOperandRange getCreateOperandsMutable();
  ::mlir::MutableOperandRange getCreateZeroOperandsMutable();
  ::mlir::MutableOperandRange getAttachOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::UnitAttr getAsyncAttr();
  bool getAsync();
  ::mlir::UnitAttr getWaitAttr();
  bool getWait();
  void setAsyncAttr(::mlir::UnitAttr attr);
  void setAsync(bool attrValue);
  void setWaitAttr(::mlir::UnitAttr attr);
  void setWait(bool attrValue);
  ::mlir::Attribute removeAsyncAttr();
  ::mlir::Attribute removeWaitAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value asyncOperand, /*optional*/::mlir::UnitAttr async, /*optional*/::mlir::Value waitDevnum, ::mlir::ValueRange waitOperands, /*optional*/::mlir::UnitAttr wait, ::mlir::ValueRange copyinOperands, ::mlir::ValueRange createOperands, ::mlir::ValueRange createZeroOperands, ::mlir::ValueRange attachOperands);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value asyncOperand, /*optional*/::mlir::UnitAttr async, /*optional*/::mlir::Value waitDevnum, ::mlir::ValueRange waitOperands, /*optional*/::mlir::UnitAttr wait, ::mlir::ValueRange copyinOperands, ::mlir::ValueRange createOperands, ::mlir::ValueRange createZeroOperands, ::mlir::ValueRange attachOperands);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value asyncOperand, /*optional*/bool async, /*optional*/::mlir::Value waitDevnum, ::mlir::ValueRange waitOperands, /*optional*/bool wait, ::mlir::ValueRange copyinOperands, ::mlir::ValueRange createOperands, ::mlir::ValueRange createZeroOperands, ::mlir::ValueRange attachOperands);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value asyncOperand, /*optional*/bool async, /*optional*/::mlir::Value waitDevnum, ::mlir::ValueRange waitOperands, /*optional*/bool wait, ::mlir::ValueRange copyinOperands, ::mlir::ValueRange createOperands, ::mlir::ValueRange createZeroOperands, ::mlir::ValueRange attachOperands);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 3 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  /// The number of data operands.
  unsigned getNumDataOperands();

  /// The i-th data operand passed.
  Value getDataOperand(unsigned i);
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::EnterDataOp)

namespace mlir {
namespace acc {

//===----------------------------------------------------------------------===//
// ::mlir::acc::ExitDataOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ExitDataOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  ExitDataOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getAsyncAttr();
  bool getAsync();
  ::mlir::UnitAttr getWaitAttr();
  bool getWait();
  ::mlir::UnitAttr getFinalizeAttr();
  bool getFinalize();
};
} // namespace detail
template <typename RangeT>
class ExitDataOpGenericAdaptor : public detail::ExitDataOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ExitDataOpGenericAdaptorBase;
public:
  ExitDataOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getIfCond() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAsyncOperand() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getWaitDevnum() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getWaitOperands() {
    return getODSOperands(3);
  }

  RangeT getCopyoutOperands() {
    return getODSOperands(4);
  }

  RangeT getDeleteOperands() {
    return getODSOperands(5);
  }

  RangeT getDetachOperands() {
    return getODSOperands(6);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ExitDataOpAdaptor : public ExitDataOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ExitDataOpGenericAdaptor::ExitDataOpGenericAdaptor;
  ExitDataOpAdaptor(ExitDataOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ExitDataOp : public ::mlir::Op<ExitDataOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ExitDataOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ExitDataOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("async"), ::llvm::StringRef("finalize"), ::llvm::StringRef("operand_segment_sizes"), ::llvm::StringRef("wait")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAsyncAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAsyncAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getFinalizeAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getFinalizeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getWaitAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getWaitAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("acc.exit_data");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getIfCond();
  ::mlir::Value getAsyncOperand();
  ::mlir::Value getWaitDevnum();
  ::mlir::Operation::operand_range getWaitOperands();
  ::mlir::Operation::operand_range getCopyoutOperands();
  ::mlir::Operation::operand_range getDeleteOperands();
  ::mlir::Operation::operand_range getDetachOperands();
  ::mlir::MutableOperandRange getIfCondMutable();
  ::mlir::MutableOperandRange getAsyncOperandMutable();
  ::mlir::MutableOperandRange getWaitDevnumMutable();
  ::mlir::MutableOperandRange getWaitOperandsMutable();
  ::mlir::MutableOperandRange getCopyoutOperandsMutable();
  ::mlir::MutableOperandRange getDeleteOperandsMutable();
  ::mlir::MutableOperandRange getDetachOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::UnitAttr getAsyncAttr();
  bool getAsync();
  ::mlir::UnitAttr getWaitAttr();
  bool getWait();
  ::mlir::UnitAttr getFinalizeAttr();
  bool getFinalize();
  void setAsyncAttr(::mlir::UnitAttr attr);
  void setAsync(bool attrValue);
  void setWaitAttr(::mlir::UnitAttr attr);
  void setWait(bool attrValue);
  void setFinalizeAttr(::mlir::UnitAttr attr);
  void setFinalize(bool attrValue);
  ::mlir::Attribute removeAsyncAttr();
  ::mlir::Attribute removeWaitAttr();
  ::mlir::Attribute removeFinalizeAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value asyncOperand, /*optional*/::mlir::UnitAttr async, /*optional*/::mlir::Value waitDevnum, ::mlir::ValueRange waitOperands, /*optional*/::mlir::UnitAttr wait, ::mlir::ValueRange copyoutOperands, ::mlir::ValueRange deleteOperands, ::mlir::ValueRange detachOperands, /*optional*/::mlir::UnitAttr finalize);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value asyncOperand, /*optional*/::mlir::UnitAttr async, /*optional*/::mlir::Value waitDevnum, ::mlir::ValueRange waitOperands, /*optional*/::mlir::UnitAttr wait, ::mlir::ValueRange copyoutOperands, ::mlir::ValueRange deleteOperands, ::mlir::ValueRange detachOperands, /*optional*/::mlir::UnitAttr finalize);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value asyncOperand, /*optional*/bool async, /*optional*/::mlir::Value waitDevnum, ::mlir::ValueRange waitOperands, /*optional*/bool wait, ::mlir::ValueRange copyoutOperands, ::mlir::ValueRange deleteOperands, ::mlir::ValueRange detachOperands, /*optional*/bool finalize = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value asyncOperand, /*optional*/bool async, /*optional*/::mlir::Value waitDevnum, ::mlir::ValueRange waitOperands, /*optional*/bool wait, ::mlir::ValueRange copyoutOperands, ::mlir::ValueRange deleteOperands, ::mlir::ValueRange detachOperands, /*optional*/bool finalize = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 4 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  /// The number of data operands.
  unsigned getNumDataOperands();

  /// The i-th data operand passed.
  Value getDataOperand(unsigned i);
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::ExitDataOp)

namespace mlir {
namespace acc {

//===----------------------------------------------------------------------===//
// ::mlir::acc::InitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class InitOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  InitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class InitOpGenericAdaptor : public detail::InitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::InitOpGenericAdaptorBase;
public:
  InitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getDeviceTypeOperands() {
    return getODSOperands(0);
  }

  ValueT getDeviceNumOperand() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getIfCond() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class InitOpAdaptor : public InitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using InitOpGenericAdaptor::InitOpGenericAdaptor;
  InitOpAdaptor(InitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class InitOp : public ::mlir::Op<InitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = InitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = InitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("operand_segment_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("acc.init");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getDeviceTypeOperands();
  ::mlir::Value getDeviceNumOperand();
  ::mlir::TypedValue<::mlir::IntegerType> getIfCond();
  ::mlir::MutableOperandRange getDeviceTypeOperandsMutable();
  ::mlir::MutableOperandRange getDeviceNumOperandMutable();
  ::mlir::MutableOperandRange getIfCondMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange deviceTypeOperands, /*optional*/::mlir::Value deviceNumOperand, /*optional*/::mlir::Value ifCond);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange deviceTypeOperands, /*optional*/::mlir::Value deviceNumOperand, /*optional*/::mlir::Value ifCond);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::InitOp)

namespace mlir {
namespace acc {

//===----------------------------------------------------------------------===//
// ::mlir::acc::LoopOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class LoopOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  LoopOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::IntegerAttr getCollapseAttr();
  ::std::optional<uint64_t> getCollapse();
  ::mlir::UnitAttr getSeqAttr();
  bool getSeq();
  ::mlir::UnitAttr getIndependentAttr();
  bool getIndependent();
  ::mlir::UnitAttr getAuto_Attr();
  bool getAuto_();
  ::mlir::acc::ReductionOpAttr getReductionOpAttr();
  ::std::optional<::mlir::acc::ReductionOp> getReductionOp();
  ::mlir::IntegerAttr getExecMappingAttr();
  uint64_t getExecMapping();
  ::mlir::Region &getRegion();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class LoopOpGenericAdaptor : public detail::LoopOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::LoopOpGenericAdaptorBase;
public:
  LoopOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getGangNum() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getGangStatic() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getWorkerNum() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getVectorLength() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getTileOperands() {
    return getODSOperands(4);
  }

  RangeT getPrivateOperands() {
    return getODSOperands(5);
  }

  RangeT getReductionOperands() {
    return getODSOperands(6);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class LoopOpAdaptor : public LoopOpGenericAdaptor<::mlir::ValueRange> {
public:
  using LoopOpGenericAdaptor::LoopOpGenericAdaptor;
  LoopOpAdaptor(LoopOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class LoopOp : public ::mlir::Op<LoopOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::VariadicResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::SingleBlockImplicitTerminator<acc::YieldOp>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = LoopOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = LoopOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("auto_"), ::llvm::StringRef("collapse"), ::llvm::StringRef("exec_mapping"), ::llvm::StringRef("independent"), ::llvm::StringRef("operand_segment_sizes"), ::llvm::StringRef("reductionOp"), ::llvm::StringRef("seq")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAuto_AttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAuto_AttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getCollapseAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getCollapseAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getExecMappingAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getExecMappingAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getIndependentAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getIndependentAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getReductionOpAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getReductionOpAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getSeqAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getSeqAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("acc.loop");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getGangNum();
  ::mlir::Value getGangStatic();
  ::mlir::Value getWorkerNum();
  ::mlir::Value getVectorLength();
  ::mlir::Operation::operand_range getTileOperands();
  ::mlir::Operation::operand_range getPrivateOperands();
  ::mlir::Operation::operand_range getReductionOperands();
  ::mlir::MutableOperandRange getGangNumMutable();
  ::mlir::MutableOperandRange getGangStaticMutable();
  ::mlir::MutableOperandRange getWorkerNumMutable();
  ::mlir::MutableOperandRange getVectorLengthMutable();
  ::mlir::MutableOperandRange getTileOperandsMutable();
  ::mlir::MutableOperandRange getPrivateOperandsMutable();
  ::mlir::MutableOperandRange getReductionOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Operation::result_range getResults();
  ::mlir::Region &getRegion();
  ::mlir::IntegerAttr getCollapseAttr();
  ::std::optional<uint64_t> getCollapse();
  ::mlir::UnitAttr getSeqAttr();
  bool getSeq();
  ::mlir::UnitAttr getIndependentAttr();
  bool getIndependent();
  ::mlir::UnitAttr getAuto_Attr();
  bool getAuto_();
  ::mlir::acc::ReductionOpAttr getReductionOpAttr();
  ::std::optional<::mlir::acc::ReductionOp> getReductionOp();
  ::mlir::IntegerAttr getExecMappingAttr();
  uint64_t getExecMapping();
  void setCollapseAttr(::mlir::IntegerAttr attr);
  void setCollapse(::std::optional<uint64_t> attrValue);
  void setSeqAttr(::mlir::UnitAttr attr);
  void setSeq(bool attrValue);
  void setIndependentAttr(::mlir::UnitAttr attr);
  void setIndependent(bool attrValue);
  void setAuto_Attr(::mlir::UnitAttr attr);
  void setAuto_(bool attrValue);
  void setReductionOpAttr(::mlir::acc::ReductionOpAttr attr);
  void setReductionOp(::std::optional<::mlir::acc::ReductionOp> attrValue);
  void setExecMappingAttr(::mlir::IntegerAttr attr);
  void setExecMapping(uint64_t attrValue);
  ::mlir::Attribute removeCollapseAttr();
  ::mlir::Attribute removeSeqAttr();
  ::mlir::Attribute removeIndependentAttr();
  ::mlir::Attribute removeAuto_Attr();
  ::mlir::Attribute removeReductionOpAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, /*optional*/::mlir::IntegerAttr collapse, /*optional*/::mlir::Value gangNum, /*optional*/::mlir::Value gangStatic, /*optional*/::mlir::Value workerNum, /*optional*/::mlir::Value vectorLength, /*optional*/::mlir::UnitAttr seq, /*optional*/::mlir::UnitAttr independent, /*optional*/::mlir::UnitAttr auto_, ::mlir::ValueRange tileOperands, ::mlir::ValueRange privateOperands, /*optional*/::mlir::acc::ReductionOpAttr reductionOp, ::mlir::ValueRange reductionOperands, ::mlir::IntegerAttr exec_mapping);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange results, /*optional*/::mlir::IntegerAttr collapse, /*optional*/::mlir::Value gangNum, /*optional*/::mlir::Value gangStatic, /*optional*/::mlir::Value workerNum, /*optional*/::mlir::Value vectorLength, /*optional*/bool seq, /*optional*/bool independent, /*optional*/bool auto_, ::mlir::ValueRange tileOperands, ::mlir::ValueRange privateOperands, /*optional*/::mlir::acc::ReductionOpAttr reductionOp, ::mlir::ValueRange reductionOperands, uint64_t exec_mapping = 0);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static void populateDefaultAttrs(const ::mlir::OperationName &opName, ::mlir::NamedAttrList &attributes);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 7 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  static StringRef getCollapseAttrStrName() { return "collapse"; }
  static StringRef getSeqAttrStrName() { return "seq"; }
  static StringRef getIndependentAttrStrName() { return "independent"; }
  static StringRef getAutoAttrStrName() { return "auto"; }
  static StringRef getExecutionMappingAttrStrName() { return "exec_mapping"; }
  static StringRef getGangKeyword() { return "gang"; }
  static StringRef getGangNumKeyword() { return "num"; }
  static StringRef getGangStaticKeyword() { return "static"; }
  static StringRef getVectorKeyword() { return "vector"; }
  static StringRef getWorkerKeyword() { return "worker"; }
  static StringRef getTileKeyword() { return "tile"; }
  static StringRef getPrivateKeyword() { return "private"; }
  static StringRef getReductionKeyword() { return "reduction"; }
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::LoopOp)

namespace mlir {
namespace acc {

//===----------------------------------------------------------------------===//
// ::mlir::acc::ParallelOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ParallelOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  ParallelOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getAsyncAttrAttr();
  bool getAsyncAttr();
  ::mlir::UnitAttr getWaitAttrAttr();
  bool getWaitAttr();
  ::mlir::UnitAttr getSelfAttrAttr();
  bool getSelfAttr();
  ::mlir::acc::ReductionOpAttr getReductionOpAttr();
  ::std::optional<::mlir::acc::ReductionOp> getReductionOp();
  ::mlir::acc::ClauseDefaultValueAttr getDefaultAttrAttr();
  ::std::optional<::mlir::acc::ClauseDefaultValue> getDefaultAttr();
  ::mlir::Region &getRegion();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class ParallelOpGenericAdaptor : public detail::ParallelOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ParallelOpGenericAdaptorBase;
public:
  ParallelOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getAsync() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getWaitOperands() {
    return getODSOperands(1);
  }

  ValueT getNumGangs() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getNumWorkers() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getVectorLength() {
    auto operands = getODSOperands(4);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getIfCond() {
    auto operands = getODSOperands(5);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getSelfCond() {
    auto operands = getODSOperands(6);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getReductionOperands() {
    return getODSOperands(7);
  }

  RangeT getCopyOperands() {
    return getODSOperands(8);
  }

  RangeT getCopyinOperands() {
    return getODSOperands(9);
  }

  RangeT getCopyinReadonlyOperands() {
    return getODSOperands(10);
  }

  RangeT getCopyoutOperands() {
    return getODSOperands(11);
  }

  RangeT getCopyoutZeroOperands() {
    return getODSOperands(12);
  }

  RangeT getCreateOperands() {
    return getODSOperands(13);
  }

  RangeT getCreateZeroOperands() {
    return getODSOperands(14);
  }

  RangeT getNoCreateOperands() {
    return getODSOperands(15);
  }

  RangeT getPresentOperands() {
    return getODSOperands(16);
  }

  RangeT getDevicePtrOperands() {
    return getODSOperands(17);
  }

  RangeT getAttachOperands() {
    return getODSOperands(18);
  }

  RangeT getGangPrivateOperands() {
    return getODSOperands(19);
  }

  RangeT getGangFirstPrivateOperands() {
    return getODSOperands(20);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ParallelOpAdaptor : public ParallelOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ParallelOpGenericAdaptor::ParallelOpGenericAdaptor;
  ParallelOpAdaptor(ParallelOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ParallelOp : public ::mlir::Op<ParallelOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ParallelOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ParallelOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("asyncAttr"), ::llvm::StringRef("defaultAttr"), ::llvm::StringRef("operand_segment_sizes"), ::llvm::StringRef("reductionOp"), ::llvm::StringRef("selfAttr"), ::llvm::StringRef("waitAttr")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAsyncAttrAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAsyncAttrAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getDefaultAttrAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getDefaultAttrAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getReductionOpAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getReductionOpAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getSelfAttrAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getSelfAttrAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getWaitAttrAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getWaitAttrAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("acc.parallel");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getAsync();
  ::mlir::Operation::operand_range getWaitOperands();
  ::mlir::Value getNumGangs();
  ::mlir::Value getNumWorkers();
  ::mlir::Value getVectorLength();
  ::mlir::TypedValue<::mlir::IntegerType> getIfCond();
  ::mlir::TypedValue<::mlir::IntegerType> getSelfCond();
  ::mlir::Operation::operand_range getReductionOperands();
  ::mlir::Operation::operand_range getCopyOperands();
  ::mlir::Operation::operand_range getCopyinOperands();
  ::mlir::Operation::operand_range getCopyinReadonlyOperands();
  ::mlir::Operation::operand_range getCopyoutOperands();
  ::mlir::Operation::operand_range getCopyoutZeroOperands();
  ::mlir::Operation::operand_range getCreateOperands();
  ::mlir::Operation::operand_range getCreateZeroOperands();
  ::mlir::Operation::operand_range getNoCreateOperands();
  ::mlir::Operation::operand_range getPresentOperands();
  ::mlir::Operation::operand_range getDevicePtrOperands();
  ::mlir::Operation::operand_range getAttachOperands();
  ::mlir::Operation::operand_range getGangPrivateOperands();
  ::mlir::Operation::operand_range getGangFirstPrivateOperands();
  ::mlir::MutableOperandRange getAsyncMutable();
  ::mlir::MutableOperandRange getWaitOperandsMutable();
  ::mlir::MutableOperandRange getNumGangsMutable();
  ::mlir::MutableOperandRange getNumWorkersMutable();
  ::mlir::MutableOperandRange getVectorLengthMutable();
  ::mlir::MutableOperandRange getIfCondMutable();
  ::mlir::MutableOperandRange getSelfCondMutable();
  ::mlir::MutableOperandRange getReductionOperandsMutable();
  ::mlir::MutableOperandRange getCopyOperandsMutable();
  ::mlir::MutableOperandRange getCopyinOperandsMutable();
  ::mlir::MutableOperandRange getCopyinReadonlyOperandsMutable();
  ::mlir::MutableOperandRange getCopyoutOperandsMutable();
  ::mlir::MutableOperandRange getCopyoutZeroOperandsMutable();
  ::mlir::MutableOperandRange getCreateOperandsMutable();
  ::mlir::MutableOperandRange getCreateZeroOperandsMutable();
  ::mlir::MutableOperandRange getNoCreateOperandsMutable();
  ::mlir::MutableOperandRange getPresentOperandsMutable();
  ::mlir::MutableOperandRange getDevicePtrOperandsMutable();
  ::mlir::MutableOperandRange getAttachOperandsMutable();
  ::mlir::MutableOperandRange getGangPrivateOperandsMutable();
  ::mlir::MutableOperandRange getGangFirstPrivateOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Region &getRegion();
  ::mlir::UnitAttr getAsyncAttrAttr();
  bool getAsyncAttr();
  ::mlir::UnitAttr getWaitAttrAttr();
  bool getWaitAttr();
  ::mlir::UnitAttr getSelfAttrAttr();
  bool getSelfAttr();
  ::mlir::acc::ReductionOpAttr getReductionOpAttr();
  ::std::optional<::mlir::acc::ReductionOp> getReductionOp();
  ::mlir::acc::ClauseDefaultValueAttr getDefaultAttrAttr();
  ::std::optional<::mlir::acc::ClauseDefaultValue> getDefaultAttr();
  void setAsyncAttrAttr(::mlir::UnitAttr attr);
  void setAsyncAttr(bool attrValue);
  void setWaitAttrAttr(::mlir::UnitAttr attr);
  void setWaitAttr(bool attrValue);
  void setSelfAttrAttr(::mlir::UnitAttr attr);
  void setSelfAttr(bool attrValue);
  void setReductionOpAttr(::mlir::acc::ReductionOpAttr attr);
  void setReductionOp(::std::optional<::mlir::acc::ReductionOp> attrValue);
  void setDefaultAttrAttr(::mlir::acc::ClauseDefaultValueAttr attr);
  void setDefaultAttr(::std::optional<::mlir::acc::ClauseDefaultValue> attrValue);
  ::mlir::Attribute removeAsyncAttrAttr();
  ::mlir::Attribute removeWaitAttrAttr();
  ::mlir::Attribute removeSelfAttrAttr();
  ::mlir::Attribute removeReductionOpAttr();
  ::mlir::Attribute removeDefaultAttrAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value async, /*optional*/::mlir::UnitAttr asyncAttr, ::mlir::ValueRange waitOperands, /*optional*/::mlir::UnitAttr waitAttr, /*optional*/::mlir::Value numGangs, /*optional*/::mlir::Value numWorkers, /*optional*/::mlir::Value vectorLength, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value selfCond, /*optional*/::mlir::UnitAttr selfAttr, /*optional*/::mlir::acc::ReductionOpAttr reductionOp, ::mlir::ValueRange reductionOperands, ::mlir::ValueRange copyOperands, ::mlir::ValueRange copyinOperands, ::mlir::ValueRange copyinReadonlyOperands, ::mlir::ValueRange copyoutOperands, ::mlir::ValueRange copyoutZeroOperands, ::mlir::ValueRange createOperands, ::mlir::ValueRange createZeroOperands, ::mlir::ValueRange noCreateOperands, ::mlir::ValueRange presentOperands, ::mlir::ValueRange devicePtrOperands, ::mlir::ValueRange attachOperands, ::mlir::ValueRange gangPrivateOperands, ::mlir::ValueRange gangFirstPrivateOperands, /*optional*/::mlir::acc::ClauseDefaultValueAttr defaultAttr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value async, /*optional*/::mlir::UnitAttr asyncAttr, ::mlir::ValueRange waitOperands, /*optional*/::mlir::UnitAttr waitAttr, /*optional*/::mlir::Value numGangs, /*optional*/::mlir::Value numWorkers, /*optional*/::mlir::Value vectorLength, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value selfCond, /*optional*/::mlir::UnitAttr selfAttr, /*optional*/::mlir::acc::ReductionOpAttr reductionOp, ::mlir::ValueRange reductionOperands, ::mlir::ValueRange copyOperands, ::mlir::ValueRange copyinOperands, ::mlir::ValueRange copyinReadonlyOperands, ::mlir::ValueRange copyoutOperands, ::mlir::ValueRange copyoutZeroOperands, ::mlir::ValueRange createOperands, ::mlir::ValueRange createZeroOperands, ::mlir::ValueRange noCreateOperands, ::mlir::ValueRange presentOperands, ::mlir::ValueRange devicePtrOperands, ::mlir::ValueRange attachOperands, ::mlir::ValueRange gangPrivateOperands, ::mlir::ValueRange gangFirstPrivateOperands, /*optional*/::mlir::acc::ClauseDefaultValueAttr defaultAttr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value async, /*optional*/bool asyncAttr, ::mlir::ValueRange waitOperands, /*optional*/bool waitAttr, /*optional*/::mlir::Value numGangs, /*optional*/::mlir::Value numWorkers, /*optional*/::mlir::Value vectorLength, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value selfCond, /*optional*/bool selfAttr, /*optional*/::mlir::acc::ReductionOpAttr reductionOp, ::mlir::ValueRange reductionOperands, ::mlir::ValueRange copyOperands, ::mlir::ValueRange copyinOperands, ::mlir::ValueRange copyinReadonlyOperands, ::mlir::ValueRange copyoutOperands, ::mlir::ValueRange copyoutZeroOperands, ::mlir::ValueRange createOperands, ::mlir::ValueRange createZeroOperands, ::mlir::ValueRange noCreateOperands, ::mlir::ValueRange presentOperands, ::mlir::ValueRange devicePtrOperands, ::mlir::ValueRange attachOperands, ::mlir::ValueRange gangPrivateOperands, ::mlir::ValueRange gangFirstPrivateOperands, /*optional*/::mlir::acc::ClauseDefaultValueAttr defaultAttr);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value async, /*optional*/bool asyncAttr, ::mlir::ValueRange waitOperands, /*optional*/bool waitAttr, /*optional*/::mlir::Value numGangs, /*optional*/::mlir::Value numWorkers, /*optional*/::mlir::Value vectorLength, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value selfCond, /*optional*/bool selfAttr, /*optional*/::mlir::acc::ReductionOpAttr reductionOp, ::mlir::ValueRange reductionOperands, ::mlir::ValueRange copyOperands, ::mlir::ValueRange copyinOperands, ::mlir::ValueRange copyinReadonlyOperands, ::mlir::ValueRange copyoutOperands, ::mlir::ValueRange copyoutZeroOperands, ::mlir::ValueRange createOperands, ::mlir::ValueRange createZeroOperands, ::mlir::ValueRange noCreateOperands, ::mlir::ValueRange presentOperands, ::mlir::ValueRange devicePtrOperands, ::mlir::ValueRange attachOperands, ::mlir::ValueRange gangPrivateOperands, ::mlir::ValueRange gangFirstPrivateOperands, /*optional*/::mlir::acc::ClauseDefaultValueAttr defaultAttr);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &p);
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 6 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  static StringRef getAsyncKeyword() { return "async"; }
  static StringRef getAsyncAttrName() { return "asyncAttr"; }
  static StringRef getWaitKeyword() { return "wait"; }
  static StringRef getWaitAttrName() { return "waitAttr"; }
  static StringRef getNumGangsKeyword() { return "num_gangs"; }
  static StringRef getNumWorkersKeyword() { return "num_workers"; }
  static StringRef getVectorLengthKeyword() { return "vector_length"; }
  static StringRef getIfKeyword() { return "if"; }
  static StringRef getSelfKeyword() { return "self"; }
  static StringRef getSelfAttrName() { return "selfAttr"; }
  static StringRef getReductionKeyword() { return "reduction"; }
  static StringRef getCopyKeyword() { return "copy"; }
  static StringRef getCopyinKeyword() { return "copyin"; }
  static StringRef getCopyinReadonlyKeyword() { return "copyin_readonly"; }
  static StringRef getCopyoutKeyword() { return "copyout"; }
  static StringRef getCopyoutZeroKeyword() { return "copyout_zero"; }
  static StringRef getCreateKeyword() { return "create"; }
  static StringRef getCreateZeroKeyword() { return "create_zero"; }
  static StringRef getNoCreateKeyword() { return "no_create"; }
  static StringRef getPresentKeyword() { return "present"; }
  static StringRef getDevicePtrKeyword() { return "deviceptr"; }
  static StringRef getAttachKeyword() { return "attach"; }
  static StringRef getPrivateKeyword() { return "private"; }
  static StringRef getFirstPrivateKeyword() { return "firstprivate"; }

  /// The number of data operands.
  unsigned getNumDataOperands();

  /// The i-th data operand passed.
  Value getDataOperand(unsigned i);
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::ParallelOp)

namespace mlir {
namespace acc {

//===----------------------------------------------------------------------===//
// ::mlir::acc::ShutdownOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ShutdownOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  ShutdownOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class ShutdownOpGenericAdaptor : public detail::ShutdownOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ShutdownOpGenericAdaptorBase;
public:
  ShutdownOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getDeviceTypeOperands() {
    return getODSOperands(0);
  }

  ValueT getDeviceNumOperand() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getIfCond() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ShutdownOpAdaptor : public ShutdownOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ShutdownOpGenericAdaptor::ShutdownOpGenericAdaptor;
  ShutdownOpAdaptor(ShutdownOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ShutdownOp : public ::mlir::Op<ShutdownOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ShutdownOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ShutdownOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("operand_segment_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("acc.shutdown");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getDeviceTypeOperands();
  ::mlir::Value getDeviceNumOperand();
  ::mlir::TypedValue<::mlir::IntegerType> getIfCond();
  ::mlir::MutableOperandRange getDeviceTypeOperandsMutable();
  ::mlir::MutableOperandRange getDeviceNumOperandMutable();
  ::mlir::MutableOperandRange getIfCondMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange deviceTypeOperands, /*optional*/::mlir::Value deviceNumOperand, /*optional*/::mlir::Value ifCond);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange deviceTypeOperands, /*optional*/::mlir::Value deviceNumOperand, /*optional*/::mlir::Value ifCond);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 1 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::ShutdownOp)

namespace mlir {
namespace acc {

//===----------------------------------------------------------------------===//
// ::mlir::acc::TerminatorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TerminatorOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  TerminatorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class TerminatorOpGenericAdaptor : public detail::TerminatorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TerminatorOpGenericAdaptorBase;
public:
  TerminatorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TerminatorOpAdaptor : public TerminatorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TerminatorOpGenericAdaptor::TerminatorOpGenericAdaptor;
  TerminatorOpAdaptor(TerminatorOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TerminatorOp : public ::mlir::Op<TerminatorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TerminatorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TerminatorOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("acc.terminator");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::TerminatorOp)

namespace mlir {
namespace acc {

//===----------------------------------------------------------------------===//
// ::mlir::acc::UpdateOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class UpdateOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  UpdateOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getAsyncAttr();
  bool getAsync();
  ::mlir::UnitAttr getWaitAttr();
  bool getWait();
  ::mlir::UnitAttr getIfPresentAttr();
  bool getIfPresent();
};
} // namespace detail
template <typename RangeT>
class UpdateOpGenericAdaptor : public detail::UpdateOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::UpdateOpGenericAdaptorBase;
public:
  UpdateOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getIfCond() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getAsyncOperand() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getWaitDevnum() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getWaitOperands() {
    return getODSOperands(3);
  }

  RangeT getDeviceTypeOperands() {
    return getODSOperands(4);
  }

  RangeT getHostOperands() {
    return getODSOperands(5);
  }

  RangeT getDeviceOperands() {
    return getODSOperands(6);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class UpdateOpAdaptor : public UpdateOpGenericAdaptor<::mlir::ValueRange> {
public:
  using UpdateOpGenericAdaptor::UpdateOpGenericAdaptor;
  UpdateOpAdaptor(UpdateOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class UpdateOp : public ::mlir::Op<UpdateOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = UpdateOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = UpdateOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("async"), ::llvm::StringRef("ifPresent"), ::llvm::StringRef("operand_segment_sizes"), ::llvm::StringRef("wait")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAsyncAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAsyncAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getIfPresentAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getIfPresentAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getWaitAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getWaitAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("acc.update");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getIfCond();
  ::mlir::Value getAsyncOperand();
  ::mlir::Value getWaitDevnum();
  ::mlir::Operation::operand_range getWaitOperands();
  ::mlir::Operation::operand_range getDeviceTypeOperands();
  ::mlir::Operation::operand_range getHostOperands();
  ::mlir::Operation::operand_range getDeviceOperands();
  ::mlir::MutableOperandRange getIfCondMutable();
  ::mlir::MutableOperandRange getAsyncOperandMutable();
  ::mlir::MutableOperandRange getWaitDevnumMutable();
  ::mlir::MutableOperandRange getWaitOperandsMutable();
  ::mlir::MutableOperandRange getDeviceTypeOperandsMutable();
  ::mlir::MutableOperandRange getHostOperandsMutable();
  ::mlir::MutableOperandRange getDeviceOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::UnitAttr getAsyncAttr();
  bool getAsync();
  ::mlir::UnitAttr getWaitAttr();
  bool getWait();
  ::mlir::UnitAttr getIfPresentAttr();
  bool getIfPresent();
  void setAsyncAttr(::mlir::UnitAttr attr);
  void setAsync(bool attrValue);
  void setWaitAttr(::mlir::UnitAttr attr);
  void setWait(bool attrValue);
  void setIfPresentAttr(::mlir::UnitAttr attr);
  void setIfPresent(bool attrValue);
  ::mlir::Attribute removeAsyncAttr();
  ::mlir::Attribute removeWaitAttr();
  ::mlir::Attribute removeIfPresentAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value asyncOperand, /*optional*/::mlir::Value waitDevnum, ::mlir::ValueRange waitOperands, /*optional*/::mlir::UnitAttr async, /*optional*/::mlir::UnitAttr wait, ::mlir::ValueRange deviceTypeOperands, ::mlir::ValueRange hostOperands, ::mlir::ValueRange deviceOperands, /*optional*/::mlir::UnitAttr ifPresent);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value asyncOperand, /*optional*/::mlir::Value waitDevnum, ::mlir::ValueRange waitOperands, /*optional*/::mlir::UnitAttr async, /*optional*/::mlir::UnitAttr wait, ::mlir::ValueRange deviceTypeOperands, ::mlir::ValueRange hostOperands, ::mlir::ValueRange deviceOperands, /*optional*/::mlir::UnitAttr ifPresent);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value asyncOperand, /*optional*/::mlir::Value waitDevnum, ::mlir::ValueRange waitOperands, /*optional*/bool async, /*optional*/bool wait, ::mlir::ValueRange deviceTypeOperands, ::mlir::ValueRange hostOperands, ::mlir::ValueRange deviceOperands, /*optional*/bool ifPresent = false);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ifCond, /*optional*/::mlir::Value asyncOperand, /*optional*/::mlir::Value waitDevnum, ::mlir::ValueRange waitOperands, /*optional*/bool async, /*optional*/bool wait, ::mlir::ValueRange deviceTypeOperands, ::mlir::ValueRange hostOperands, ::mlir::ValueRange deviceOperands, /*optional*/bool ifPresent = false);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static void getCanonicalizationPatterns(::mlir::RewritePatternSet &results, ::mlir::MLIRContext *context);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 4 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
  /// The number of data operands.
  unsigned getNumDataOperands();

  /// The i-th data operand passed.
  Value getDataOperand(unsigned i);
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::UpdateOp)

namespace mlir {
namespace acc {

//===----------------------------------------------------------------------===//
// ::mlir::acc::WaitOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class WaitOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  WaitOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::UnitAttr getAsyncAttr();
  bool getAsync();
};
} // namespace detail
template <typename RangeT>
class WaitOpGenericAdaptor : public detail::WaitOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::WaitOpGenericAdaptorBase;
public:
  WaitOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getWaitOperands() {
    return getODSOperands(0);
  }

  ValueT getAsyncOperand() {
    auto operands = getODSOperands(1);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getWaitDevnum() {
    auto operands = getODSOperands(2);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getIfCond() {
    auto operands = getODSOperands(3);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class WaitOpAdaptor : public WaitOpGenericAdaptor<::mlir::ValueRange> {
public:
  using WaitOpGenericAdaptor::WaitOpGenericAdaptor;
  WaitOpAdaptor(WaitOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class WaitOp : public ::mlir::Op<WaitOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = WaitOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = WaitOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("async"), ::llvm::StringRef("operand_segment_sizes")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getAsyncAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getAsyncAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOperandSegmentSizesAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOperandSegmentSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("acc.wait");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getWaitOperands();
  ::mlir::Value getAsyncOperand();
  ::mlir::Value getWaitDevnum();
  ::mlir::TypedValue<::mlir::IntegerType> getIfCond();
  ::mlir::MutableOperandRange getWaitOperandsMutable();
  ::mlir::MutableOperandRange getAsyncOperandMutable();
  ::mlir::MutableOperandRange getWaitDevnumMutable();
  ::mlir::MutableOperandRange getIfCondMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::UnitAttr getAsyncAttr();
  bool getAsync();
  void setAsyncAttr(::mlir::UnitAttr attr);
  void setAsync(bool attrValue);
  ::mlir::Attribute removeAsyncAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange waitOperands, /*optional*/::mlir::Value asyncOperand, /*optional*/::mlir::Value waitDevnum, /*optional*/::mlir::UnitAttr async, /*optional*/::mlir::Value ifCond);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange waitOperands, /*optional*/::mlir::Value asyncOperand, /*optional*/::mlir::Value waitDevnum, /*optional*/::mlir::UnitAttr async, /*optional*/::mlir::Value ifCond);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange waitOperands, /*optional*/::mlir::Value asyncOperand, /*optional*/::mlir::Value waitDevnum, /*optional*/bool async, /*optional*/::mlir::Value ifCond);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange waitOperands, /*optional*/::mlir::Value asyncOperand, /*optional*/::mlir::Value waitDevnum, /*optional*/bool async, /*optional*/::mlir::Value ifCond);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
private:
  ::mlir::StringAttr getAttributeNameForIndex(unsigned index) {
    return getAttributeNameForIndex((*this)->getName(), index);
  }

  static ::mlir::StringAttr getAttributeNameForIndex(::mlir::OperationName name, unsigned index) {
    assert(index < 2 && "invalid attribute index");
    assert(name.getStringRef() == getOperationName() && "invalid operation name");
    return name.getAttributeNames()[index];
  }

public:
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::WaitOp)

namespace mlir {
namespace acc {

//===----------------------------------------------------------------------===//
// ::mlir::acc::YieldOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class YieldOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  YieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class YieldOpGenericAdaptor : public detail::YieldOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::YieldOpGenericAdaptorBase;
public:
  YieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  RangeT getOperands() {
    return getODSOperands(0);
  }

private:
  RangeT odsOperands;
};
class YieldOpAdaptor : public YieldOpGenericAdaptor<::mlir::ValueRange> {
public:
  using YieldOpGenericAdaptor::YieldOpGenericAdaptor;
  YieldOpAdaptor(YieldOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class YieldOp : public ::mlir::Op<YieldOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::HasParent<ParallelOp, LoopOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = YieldOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = YieldOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("acc.yield");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Operation::operand_range getOperands();
  ::mlir::MutableOperandRange getOperandsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::ValueRange operands);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace acc
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::acc::YieldOp)


#endif  // GET_OP_CLASSES

