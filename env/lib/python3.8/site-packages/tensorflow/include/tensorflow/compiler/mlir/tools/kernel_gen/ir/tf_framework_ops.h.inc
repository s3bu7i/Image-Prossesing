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
namespace kernel_gen {
namespace tf_framework {
class IsValidMemRefOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class JITCompileFromStrOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class JITCompileOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class JITCompileYieldOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class JITExecuteOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class NullContextOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class NullMemRefOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class ReportErrorOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class TFAllocOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class TFAssertOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
namespace mlir {
namespace kernel_gen {
namespace tf_framework {
class TFDeallocOp;
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
#endif

#ifdef GET_OP_CLASSES
#undef GET_OP_CLASSES


//===----------------------------------------------------------------------===//
// Local Utility Method Definitions
//===----------------------------------------------------------------------===//

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::IsValidMemRefOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class IsValidMemRefOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  IsValidMemRefOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class IsValidMemRefOpGenericAdaptor : public detail::IsValidMemRefOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::IsValidMemRefOpGenericAdaptorBase;
public:
  IsValidMemRefOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getArg() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class IsValidMemRefOpAdaptor : public IsValidMemRefOpGenericAdaptor<::mlir::ValueRange> {
public:
  using IsValidMemRefOpGenericAdaptor::IsValidMemRefOpGenericAdaptor;
  IsValidMemRefOpAdaptor(IsValidMemRefOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class IsValidMemRefOp : public ::mlir::Op<IsValidMemRefOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::IntegerType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = IsValidMemRefOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = IsValidMemRefOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.is_valid_memref");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getArg();
  ::mlir::MutableOperandRange getArgMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::IntegerType> getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value arg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::IsValidMemRefOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::JITCompileFromStrOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class JITCompileFromStrOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  JITCompileFromStrOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::StringAttr getCodeAttr();
  ::llvm::StringRef getCode();
  ::mlir::ArrayAttr getTileSizesAttr();
  ::mlir::ArrayAttr getTileSizes();
  ::mlir::ArrayAttr getUnrollFactorsAttr();
  ::mlir::ArrayAttr getUnrollFactors();
  ::mlir::IntegerAttr getMaxSupportedRankAttr();
  uint64_t getMaxSupportedRank();
  ::mlir::BoolAttr getEnableFtzAttr();
  bool getEnableFtz();
  ::mlir::BoolAttr getIndex64BitAttr();
  bool getIndex64Bit();
  ::mlir::BoolAttr getCpuCodegenAttr();
  bool getCpuCodegen();
};
} // namespace detail
template <typename RangeT>
class JITCompileFromStrOpGenericAdaptor : public detail::JITCompileFromStrOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::JITCompileFromStrOpGenericAdaptorBase;
public:
  JITCompileFromStrOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class JITCompileFromStrOpAdaptor : public JITCompileFromStrOpGenericAdaptor<::mlir::ValueRange> {
public:
  using JITCompileFromStrOpGenericAdaptor::JITCompileFromStrOpGenericAdaptor;
  JITCompileFromStrOpAdaptor(JITCompileFromStrOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class JITCompileFromStrOp : public ::mlir::Op<JITCompileFromStrOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = JITCompileFromStrOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = JITCompileFromStrOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("code"), ::llvm::StringRef("cpuCodegen"), ::llvm::StringRef("enableFtz"), ::llvm::StringRef("index64Bit"), ::llvm::StringRef("maxSupportedRank"), ::llvm::StringRef("tileSizes"), ::llvm::StringRef("unrollFactors")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getCodeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getCodeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getCpuCodegenAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getCpuCodegenAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  ::mlir::StringAttr getEnableFtzAttrName() {
    return getAttributeNameForIndex(2);
  }

  static ::mlir::StringAttr getEnableFtzAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 2);
  }

  ::mlir::StringAttr getIndex64BitAttrName() {
    return getAttributeNameForIndex(3);
  }

  static ::mlir::StringAttr getIndex64BitAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 3);
  }

  ::mlir::StringAttr getMaxSupportedRankAttrName() {
    return getAttributeNameForIndex(4);
  }

  static ::mlir::StringAttr getMaxSupportedRankAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 4);
  }

  ::mlir::StringAttr getTileSizesAttrName() {
    return getAttributeNameForIndex(5);
  }

  static ::mlir::StringAttr getTileSizesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 5);
  }

  ::mlir::StringAttr getUnrollFactorsAttrName() {
    return getAttributeNameForIndex(6);
  }

  static ::mlir::StringAttr getUnrollFactorsAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 6);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.jit_compile_from_str");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::MutableOperandRange getCtxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  ::mlir::StringAttr getCodeAttr();
  ::llvm::StringRef getCode();
  ::mlir::ArrayAttr getTileSizesAttr();
  ::mlir::ArrayAttr getTileSizes();
  ::mlir::ArrayAttr getUnrollFactorsAttr();
  ::mlir::ArrayAttr getUnrollFactors();
  ::mlir::IntegerAttr getMaxSupportedRankAttr();
  uint64_t getMaxSupportedRank();
  ::mlir::BoolAttr getEnableFtzAttr();
  bool getEnableFtz();
  ::mlir::BoolAttr getIndex64BitAttr();
  bool getIndex64Bit();
  ::mlir::BoolAttr getCpuCodegenAttr();
  bool getCpuCodegen();
  void setCodeAttr(::mlir::StringAttr attr);
  void setCode(::llvm::StringRef attrValue);
  void setTileSizesAttr(::mlir::ArrayAttr attr);
  void setUnrollFactorsAttr(::mlir::ArrayAttr attr);
  void setMaxSupportedRankAttr(::mlir::IntegerAttr attr);
  void setMaxSupportedRank(uint64_t attrValue);
  void setEnableFtzAttr(::mlir::BoolAttr attr);
  void setEnableFtz(bool attrValue);
  void setIndex64BitAttr(::mlir::BoolAttr attr);
  void setIndex64Bit(bool attrValue);
  void setCpuCodegenAttr(::mlir::BoolAttr attr);
  void setCpuCodegen(bool attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, /*optional*/::mlir::Value ctx, ::mlir::StringAttr code, ::mlir::ArrayAttr tileSizes, ::mlir::ArrayAttr unrollFactors, ::mlir::IntegerAttr maxSupportedRank, ::mlir::BoolAttr enableFtz, ::mlir::BoolAttr index64Bit, ::mlir::BoolAttr cpuCodegen);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ctx, ::mlir::StringAttr code, ::mlir::ArrayAttr tileSizes, ::mlir::ArrayAttr unrollFactors, ::mlir::IntegerAttr maxSupportedRank, ::mlir::BoolAttr enableFtz, ::mlir::BoolAttr index64Bit, ::mlir::BoolAttr cpuCodegen);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, /*optional*/::mlir::Value ctx, ::llvm::StringRef code, ::mlir::ArrayAttr tileSizes, ::mlir::ArrayAttr unrollFactors, uint64_t maxSupportedRank, bool enableFtz, bool index64Bit, bool cpuCodegen);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ctx, ::llvm::StringRef code, ::mlir::ArrayAttr tileSizes, ::mlir::ArrayAttr unrollFactors, uint64_t maxSupportedRank, bool enableFtz, bool index64Bit, bool cpuCodegen);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
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
  static constexpr StringRef kJITEntryFunctionName = "main";
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::JITCompileFromStrOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::JITCompileOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class JITCompileOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  JITCompileOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::Region &getBody();
  ::mlir::RegionRange getRegions();
};
} // namespace detail
template <typename RangeT>
class JITCompileOpGenericAdaptor : public detail::JITCompileOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::JITCompileOpGenericAdaptorBase;
public:
  JITCompileOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class JITCompileOpAdaptor : public JITCompileOpGenericAdaptor<::mlir::ValueRange> {
public:
  using JITCompileOpGenericAdaptor::JITCompileOpGenericAdaptor;
  JITCompileOpAdaptor(JITCompileOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class JITCompileOp : public ::mlir::Op<JITCompileOp, ::mlir::OpTrait::OneRegion, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::VariadicOperands, ::mlir::OpTrait::SingleBlock, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = JITCompileOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = JITCompileOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.jit_compile");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::MutableOperandRange getCtxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  ::mlir::Region &getBody();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, /*optional*/::mlir::Value ctx);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ctx);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::JITCompileOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::JITCompileYieldOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class JITCompileYieldOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  JITCompileYieldOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class JITCompileYieldOpGenericAdaptor : public detail::JITCompileYieldOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::JITCompileYieldOpGenericAdaptorBase;
public:
  JITCompileYieldOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getResult() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class JITCompileYieldOpAdaptor : public JITCompileYieldOpGenericAdaptor<::mlir::ValueRange> {
public:
  using JITCompileYieldOpGenericAdaptor::JITCompileYieldOpGenericAdaptor;
  JITCompileYieldOpAdaptor(JITCompileYieldOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class JITCompileYieldOp : public ::mlir::Op<JITCompileYieldOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::HasParent<JITCompileOp>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::OpTrait::ReturnLike, ::mlir::OpTrait::IsTerminator> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = JITCompileYieldOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = JITCompileYieldOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.jit_compile_yield");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getResult();
  ::mlir::MutableOperandRange getResultMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value result);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::JITCompileYieldOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::JITExecuteOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class JITExecuteOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  JITExecuteOpGenericAdaptorBase(::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class JITExecuteOpGenericAdaptor : public detail::JITExecuteOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::JITExecuteOpGenericAdaptorBase;
public:
  JITExecuteOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    auto operands = getODSOperands(0);
    return operands.empty() ? ValueT{} : (*operands.begin());
  }

  ValueT getCallable() {
    return (*getODSOperands(1).begin());
  }

  RangeT getInputs() {
    return getODSOperands(2);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class JITExecuteOpAdaptor : public JITExecuteOpGenericAdaptor<::mlir::ValueRange> {
public:
  using JITExecuteOpGenericAdaptor::JITExecuteOpGenericAdaptor;
  JITExecuteOpAdaptor(JITExecuteOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class JITExecuteOp : public ::mlir::Op<JITExecuteOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::AttrSizedOperandSegments, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::bufferization::AllocationOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = JITExecuteOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = JITExecuteOpGenericAdaptor<RangeT>;
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
    return ::llvm::StringLiteral("tf_framework.jit_execute");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::Value getCallable();
  ::mlir::Operation::operand_range getInputs();
  ::mlir::MutableOperandRange getCtxMutable();
  ::mlir::MutableOperandRange getCallableMutable();
  ::mlir::MutableOperandRange getInputsMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, /*optional*/::mlir::Value ctx, ::mlir::Value callable, ::mlir::ValueRange inputs);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, /*optional*/::mlir::Value ctx, ::mlir::Value callable, ::mlir::ValueRange inputs);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::std::optional<::mlir::Operation*> buildDealloc(::mlir::OpBuilder&builder, ::mlir::Value alloc);
  static ::std::optional<::mlir::Value> buildClone(::mlir::OpBuilder&builder, ::mlir::Value alloc);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::JITExecuteOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::NullContextOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NullContextOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  NullContextOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class NullContextOpGenericAdaptor : public detail::NullContextOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NullContextOpGenericAdaptorBase;
public:
  NullContextOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

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
class NullContextOpAdaptor : public NullContextOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NullContextOpGenericAdaptor::NullContextOpGenericAdaptor;
  NullContextOpAdaptor(NullContextOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NullContextOp : public ::mlir::Op<NullContextOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants, ::mlir::ConditionallySpeculatable::Trait, ::mlir::OpTrait::AlwaysSpeculatableImplTrait, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NullContextOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NullContextOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.null_context");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::NullContextOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::NullMemRefOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class NullMemRefOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  NullMemRefOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class NullMemRefOpGenericAdaptor : public detail::NullMemRefOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::NullMemRefOpGenericAdaptorBase;
public:
  NullMemRefOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

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
class NullMemRefOpAdaptor : public NullMemRefOpGenericAdaptor<::mlir::ValueRange> {
public:
  using NullMemRefOpGenericAdaptor::NullMemRefOpGenericAdaptor;
  NullMemRefOpAdaptor(NullMemRefOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class NullMemRefOp : public ::mlir::Op<NullMemRefOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::Type>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::ZeroOperands, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = NullMemRefOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = NullMemRefOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.null_memref");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::Value getResult();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
public:
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::NullMemRefOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::ReportErrorOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class ReportErrorOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  ReportErrorOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::kernel_gen::tf_framework::ErrorCodeAttr getErrorCodeAttr();
  ::mlir::kernel_gen::tf_framework::ErrorCode getErrorCode();
  ::mlir::StringAttr getMsgAttr();
  ::llvm::StringRef getMsg();
};
} // namespace detail
template <typename RangeT>
class ReportErrorOpGenericAdaptor : public detail::ReportErrorOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::ReportErrorOpGenericAdaptorBase;
public:
  ReportErrorOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    return (*getODSOperands(0).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class ReportErrorOpAdaptor : public ReportErrorOpGenericAdaptor<::mlir::ValueRange> {
public:
  using ReportErrorOpGenericAdaptor::ReportErrorOpGenericAdaptor;
  ReportErrorOpAdaptor(ReportErrorOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class ReportErrorOp : public ::mlir::Op<ReportErrorOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::OneOperand, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = ReportErrorOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = ReportErrorOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("error_code"), ::llvm::StringRef("msg")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getErrorCodeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getErrorCodeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMsgAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMsgAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.report_error");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::MutableOperandRange getCtxMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::kernel_gen::tf_framework::ErrorCodeAttr getErrorCodeAttr();
  ::mlir::kernel_gen::tf_framework::ErrorCode getErrorCode();
  ::mlir::StringAttr getMsgAttr();
  ::llvm::StringRef getMsg();
  void setErrorCodeAttr(::mlir::kernel_gen::tf_framework::ErrorCodeAttr attr);
  void setErrorCode(::mlir::kernel_gen::tf_framework::ErrorCode attrValue);
  void setMsgAttr(::mlir::StringAttr attr);
  void setMsg(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::mlir::kernel_gen::tf_framework::ErrorCodeAttr error_code, ::mlir::StringAttr msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::kernel_gen::tf_framework::ErrorCodeAttr error_code, ::mlir::StringAttr msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::mlir::kernel_gen::tf_framework::ErrorCode error_code, ::llvm::StringRef msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::kernel_gen::tf_framework::ErrorCode error_code, ::llvm::StringRef msg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::ReportErrorOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::TFAllocOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TFAllocOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  TFAllocOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::ArrayAttr getInputIndicesAttr();
  ::std::optional< ::mlir::ArrayAttr > getInputIndices();
  ::mlir::IntegerAttr getOutputIndexAttr();
  ::std::optional<uint32_t> getOutputIndex();
};
} // namespace detail
template <typename RangeT>
class TFAllocOpGenericAdaptor : public detail::TFAllocOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TFAllocOpGenericAdaptorBase;
public:
  TFAllocOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    return (*getODSOperands(0).begin());
  }

  RangeT getDynSizes() {
    return getODSOperands(1);
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TFAllocOpAdaptor : public TFAllocOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TFAllocOpGenericAdaptor::TFAllocOpGenericAdaptor;
  TFAllocOpAdaptor(TFAllocOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TFAllocOp : public ::mlir::Op<TFAllocOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::OneResult, ::mlir::OpTrait::OneTypedResult<::mlir::MemRefType>::Impl, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::AtLeastNOperands<1>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait, ::mlir::bufferization::AllocationOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TFAllocOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TFAllocOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("input_indices"), ::llvm::StringRef("output_index")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getInputIndicesAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getInputIndicesAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getOutputIndexAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getOutputIndexAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.alloc");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::Operation::operand_range getDynSizes();
  ::mlir::MutableOperandRange getCtxMutable();
  ::mlir::MutableOperandRange getDynSizesMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::TypedValue<::mlir::MemRefType> getResult();
  ::mlir::ArrayAttr getInputIndicesAttr();
  ::std::optional< ::mlir::ArrayAttr > getInputIndices();
  ::mlir::IntegerAttr getOutputIndexAttr();
  ::std::optional<uint32_t> getOutputIndex();
  void setInputIndicesAttr(::mlir::ArrayAttr attr);
  void setOutputIndexAttr(::mlir::IntegerAttr attr);
  void setOutputIndex(::std::optional<uint32_t> attrValue);
  ::mlir::Attribute removeInputIndicesAttr();
  ::mlir::Attribute removeOutputIndexAttr();
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, MemRefType memref_type, Value ctx);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, MemRefType memref_type, Value ctx, ValueRange dyn_sizes);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Type result, ::mlir::Value ctx, ::mlir::ValueRange dyn_sizes, /*optional*/::mlir::ArrayAttr input_indices, /*optional*/::mlir::IntegerAttr output_index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::ValueRange dyn_sizes, /*optional*/::mlir::ArrayAttr input_indices, /*optional*/::mlir::IntegerAttr output_index);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  ::mlir::LogicalResult verify();
  static ::std::optional<::mlir::Operation*> buildDealloc(::mlir::OpBuilder&builder, ::mlir::Value alloc);
  static ::std::optional<::mlir::Value> buildClone(::mlir::OpBuilder&builder, ::mlir::Value alloc);
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
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
  MemRefType getType() { return getResult().getType().cast<MemRefType>(); }
  static constexpr StringRef kReuseOutputAttrName = "reuse_output";
  static constexpr StringRef kReuseInputCandidatesAttrName =
      "reuse_input_candidates";
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::TFAllocOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::TFAssertOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TFAssertOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  TFAssertOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
  ::mlir::kernel_gen::tf_framework::ErrorCodeAttr getErrorCodeAttr();
  ::mlir::kernel_gen::tf_framework::ErrorCode getErrorCode();
  ::mlir::StringAttr getMsgAttr();
  ::llvm::StringRef getMsg();
};
} // namespace detail
template <typename RangeT>
class TFAssertOpGenericAdaptor : public detail::TFAssertOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TFAssertOpGenericAdaptorBase;
public:
  TFAssertOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    return (*getODSOperands(0).begin());
  }

  ValueT getArg() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TFAssertOpAdaptor : public TFAssertOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TFAssertOpGenericAdaptor::TFAssertOpGenericAdaptor;
  TFAssertOpAdaptor(TFAssertOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TFAssertOp : public ::mlir::Op<TFAssertOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TFAssertOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TFAssertOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    static ::llvm::StringRef attrNames[] = {::llvm::StringRef("error_code"), ::llvm::StringRef("msg")};
    return ::llvm::ArrayRef(attrNames);
  }

  ::mlir::StringAttr getErrorCodeAttrName() {
    return getAttributeNameForIndex(0);
  }

  static ::mlir::StringAttr getErrorCodeAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 0);
  }

  ::mlir::StringAttr getMsgAttrName() {
    return getAttributeNameForIndex(1);
  }

  static ::mlir::StringAttr getMsgAttrName(::mlir::OperationName name) {
    return getAttributeNameForIndex(name, 1);
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.assert");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::TypedValue<::mlir::IntegerType> getArg();
  ::mlir::MutableOperandRange getCtxMutable();
  ::mlir::MutableOperandRange getArgMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  ::mlir::kernel_gen::tf_framework::ErrorCodeAttr getErrorCodeAttr();
  ::mlir::kernel_gen::tf_framework::ErrorCode getErrorCode();
  ::mlir::StringAttr getMsgAttr();
  ::llvm::StringRef getMsg();
  void setErrorCodeAttr(::mlir::kernel_gen::tf_framework::ErrorCodeAttr attr);
  void setErrorCode(::mlir::kernel_gen::tf_framework::ErrorCode attrValue);
  void setMsgAttr(::mlir::StringAttr attr);
  void setMsg(::llvm::StringRef attrValue);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::mlir::Value arg, ::mlir::kernel_gen::tf_framework::ErrorCodeAttr error_code, ::mlir::StringAttr msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::Value arg, ::mlir::kernel_gen::tf_framework::ErrorCodeAttr error_code, ::mlir::StringAttr msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::mlir::Value arg, ::mlir::kernel_gen::tf_framework::ErrorCode error_code, ::llvm::StringRef msg);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::Value arg, ::mlir::kernel_gen::tf_framework::ErrorCode error_code, ::llvm::StringRef msg);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
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
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::TFAssertOp)

namespace mlir {
namespace kernel_gen {
namespace tf_framework {

//===----------------------------------------------------------------------===//
// ::mlir::kernel_gen::tf_framework::TFDeallocOp declarations
//===----------------------------------------------------------------------===//

namespace detail {
class TFDeallocOpGenericAdaptorBase {
protected:
  ::mlir::DictionaryAttr odsAttrs;
  ::mlir::RegionRange odsRegions;
  ::std::optional<::mlir::OperationName> odsOpName;
public:
  TFDeallocOpGenericAdaptorBase(::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {});

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index, unsigned odsOperandsSize);
  ::mlir::DictionaryAttr getAttributes();
};
} // namespace detail
template <typename RangeT>
class TFDeallocOpGenericAdaptor : public detail::TFDeallocOpGenericAdaptorBase {
  using ValueT = ::llvm::detail::ValueOfRange<RangeT>;
  using Base = detail::TFDeallocOpGenericAdaptorBase;
public:
  TFDeallocOpGenericAdaptor(RangeT values, ::mlir::DictionaryAttr attrs = nullptr, ::mlir::RegionRange regions = {}) : Base(attrs, regions), odsOperands(values) {}

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index) {
    return Base::getODSOperandIndexAndLength(index, odsOperands.size());
  }

  RangeT getODSOperands(unsigned index) {
    auto valueRange = getODSOperandIndexAndLength(index);
    return {std::next(odsOperands.begin(), valueRange.first),
             std::next(odsOperands.begin(), valueRange.first + valueRange.second)};
  }

  ValueT getCtx() {
    return (*getODSOperands(0).begin());
  }

  ValueT getMemref() {
    return (*getODSOperands(1).begin());
  }

  RangeT getOperands() {
    return odsOperands;
  }

private:
  RangeT odsOperands;
};
class TFDeallocOpAdaptor : public TFDeallocOpGenericAdaptor<::mlir::ValueRange> {
public:
  using TFDeallocOpGenericAdaptor::TFDeallocOpGenericAdaptor;
  TFDeallocOpAdaptor(TFDeallocOp op);

  ::mlir::LogicalResult verify(::mlir::Location loc);
};
class TFDeallocOp : public ::mlir::Op<TFDeallocOp, ::mlir::OpTrait::ZeroRegions, ::mlir::OpTrait::ZeroResults, ::mlir::OpTrait::ZeroSuccessors, ::mlir::OpTrait::NOperands<2>::Impl, ::mlir::OpTrait::OpInvariants, ::mlir::MemoryEffectOpInterface::Trait> {
public:
  using Op::Op;
  using Op::print;
  using Adaptor = TFDeallocOpAdaptor;
  template <typename RangeT>
  using GenericAdaptor = TFDeallocOpGenericAdaptor<RangeT>;
  using FoldAdaptor = GenericAdaptor<::llvm::ArrayRef<::mlir::Attribute>>;
  static ::llvm::ArrayRef<::llvm::StringRef> getAttributeNames() {
    return {};
  }

  static constexpr ::llvm::StringLiteral getOperationName() {
    return ::llvm::StringLiteral("tf_framework.dealloc");
  }

  std::pair<unsigned, unsigned> getODSOperandIndexAndLength(unsigned index);
  ::mlir::Operation::operand_range getODSOperands(unsigned index);
  ::mlir::Value getCtx();
  ::mlir::Value getMemref();
  ::mlir::MutableOperandRange getCtxMutable();
  ::mlir::MutableOperandRange getMemrefMutable();
  std::pair<unsigned, unsigned> getODSResultIndexAndLength(unsigned index);
  ::mlir::Operation::result_range getODSResults(unsigned index);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::Value ctx, ::mlir::Value memref);
  static void build(::mlir::OpBuilder &odsBuilder, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::Value ctx, ::mlir::Value memref);
  static void build(::mlir::OpBuilder &, ::mlir::OperationState &odsState, ::mlir::TypeRange resultTypes, ::mlir::ValueRange operands, ::llvm::ArrayRef<::mlir::NamedAttribute> attributes = {});
  ::mlir::LogicalResult verifyInvariantsImpl();
  ::mlir::LogicalResult verifyInvariants();
  static ::mlir::ParseResult parse(::mlir::OpAsmParser &parser, ::mlir::OperationState &result);
  void print(::mlir::OpAsmPrinter &_odsPrinter);
  void getEffects(::llvm::SmallVectorImpl<::mlir::SideEffects::EffectInstance<::mlir::MemoryEffects::Effect>> &effects);
public:
};
} // namespace tf_framework
} // namespace kernel_gen
} // namespace mlir
MLIR_DECLARE_EXPLICIT_TYPE_ID(::mlir::kernel_gen::tf_framework::TFDeallocOp)


#endif  // GET_OP_CLASSES

