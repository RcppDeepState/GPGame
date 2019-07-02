// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// getKS_cpp
int getKS_cpp(NumericMatrix Z, NumericVector Nadir, NumericVector Shadow);
RcppExport SEXP _GPGame_getKS_cpp(SEXP ZSEXP, SEXP NadirSEXP, SEXP ShadowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Z(ZSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Nadir(NadirSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type Shadow(ShadowSEXP);
    rcpp_result_gen = Rcpp::wrap(getKS_cpp(Z, Nadir, Shadow));
    return rcpp_result_gen;
END_RCPP
}
// rel_ranks_cpp
NumericMatrix rel_ranks_cpp(NumericMatrix Zrand, NumericMatrix Urand, NumericMatrix Zred);
RcppExport SEXP _GPGame_rel_ranks_cpp(SEXP ZrandSEXP, SEXP UrandSEXP, SEXP ZredSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type Zrand(ZrandSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Urand(UrandSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Zred(ZredSEXP);
    rcpp_result_gen = Rcpp::wrap(rel_ranks_cpp(Zrand, Urand, Zred));
    return rcpp_result_gen;
END_RCPP
}
// PSNE_sparseMat_cross
LogicalMatrix PSNE_sparseMat_cross(NumericVector NS, NumericMatrix Poffs, IntegerMatrix expindices, IntegerMatrix combisim, int ncross);
RcppExport SEXP _GPGame_PSNE_sparseMat_cross(SEXP NSSEXP, SEXP PoffsSEXP, SEXP expindicesSEXP, SEXP combisimSEXP, SEXP ncrossSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type NS(NSSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Poffs(PoffsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type expindices(expindicesSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type combisim(combisimSEXP);
    Rcpp::traits::input_parameter< int >::type ncross(ncrossSEXP);
    rcpp_result_gen = Rcpp::wrap(PSNE_sparseMat_cross(NS, Poffs, expindices, combisim, ncross));
    return rcpp_result_gen;
END_RCPP
}
// getPoffsCross
NumericMatrix getPoffsCross(LogicalMatrix isNash, NumericMatrix Poffs, IntegerMatrix combisim, int nsim);
RcppExport SEXP _GPGame_getPoffsCross(SEXP isNashSEXP, SEXP PoffsSEXP, SEXP combisimSEXP, SEXP nsimSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalMatrix >::type isNash(isNashSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Poffs(PoffsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type combisim(combisimSEXP);
    Rcpp::traits::input_parameter< int >::type nsim(nsimSEXP);
    rcpp_result_gen = Rcpp::wrap(getPoffsCross(isNash, Poffs, combisim, nsim));
    return rcpp_result_gen;
END_RCPP
}
// PSNE_sparseMat
LogicalMatrix PSNE_sparseMat(NumericVector NS, NumericMatrix Poffs, IntegerMatrix expindices);
RcppExport SEXP _GPGame_PSNE_sparseMat(SEXP NSSEXP, SEXP PoffsSEXP, SEXP expindicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type NS(NSSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Poffs(PoffsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type expindices(expindicesSEXP);
    rcpp_result_gen = Rcpp::wrap(PSNE_sparseMat(NS, Poffs, expindices));
    return rcpp_result_gen;
END_RCPP
}
// PSNE_sparseMat_sorted
LogicalMatrix PSNE_sparseMat_sorted(NumericVector NS, NumericMatrix Poffs, IntegerMatrix expindices);
RcppExport SEXP _GPGame_PSNE_sparseMat_sorted(SEXP NSSEXP, SEXP PoffsSEXP, SEXP expindicesSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type NS(NSSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Poffs(PoffsSEXP);
    Rcpp::traits::input_parameter< IntegerMatrix >::type expindices(expindicesSEXP);
    rcpp_result_gen = Rcpp::wrap(PSNE_sparseMat_sorted(NS, Poffs, expindices));
    return rcpp_result_gen;
END_RCPP
}
// getPoffs
NumericMatrix getPoffs(LogicalMatrix isNash, NumericMatrix Poffs, int nsim, int nobj);
RcppExport SEXP _GPGame_getPoffs(SEXP isNashSEXP, SEXP PoffsSEXP, SEXP nsimSEXP, SEXP nobjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< LogicalMatrix >::type isNash(isNashSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type Poffs(PoffsSEXP);
    Rcpp::traits::input_parameter< int >::type nsim(nsimSEXP);
    Rcpp::traits::input_parameter< int >::type nobj(nobjSEXP);
    rcpp_result_gen = Rcpp::wrap(getPoffs(isNash, Poffs, nsim, nobj));
    return rcpp_result_gen;
END_RCPP
}
// nonDomInd_cpp
std::vector<int> nonDomInd_cpp(NumericMatrix mat);
RcppExport SEXP _GPGame_nonDomInd_cpp(SEXP matSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type mat(matSEXP);
    rcpp_result_gen = Rcpp::wrap(nonDomInd_cpp(mat));
    return rcpp_result_gen;
END_RCPP
}
// nonDomSet
LogicalVector nonDomSet(NumericMatrix points, NumericMatrix ref);
RcppExport SEXP _GPGame_nonDomSet(SEXP pointsSEXP, SEXP refSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type points(pointsSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type ref(refSEXP);
    rcpp_result_gen = Rcpp::wrap(nonDomSet(points, ref));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_GPGame_getKS_cpp", (DL_FUNC) &_GPGame_getKS_cpp, 3},
    {"_GPGame_rel_ranks_cpp", (DL_FUNC) &_GPGame_rel_ranks_cpp, 3},
    {"_GPGame_PSNE_sparseMat_cross", (DL_FUNC) &_GPGame_PSNE_sparseMat_cross, 5},
    {"_GPGame_getPoffsCross", (DL_FUNC) &_GPGame_getPoffsCross, 4},
    {"_GPGame_PSNE_sparseMat", (DL_FUNC) &_GPGame_PSNE_sparseMat, 3},
    {"_GPGame_PSNE_sparseMat_sorted", (DL_FUNC) &_GPGame_PSNE_sparseMat_sorted, 3},
    {"_GPGame_getPoffs", (DL_FUNC) &_GPGame_getPoffs, 4},
    {"_GPGame_nonDomInd_cpp", (DL_FUNC) &_GPGame_nonDomInd_cpp, 1},
    {"_GPGame_nonDomSet", (DL_FUNC) &_GPGame_nonDomSet, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_GPGame(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
