// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// extract_protein_name
CharacterVector extract_protein_name(CharacterVector ptm_list, CharacterVector protein_list);
RcppExport SEXP _MSstatsTMTPTM_extract_protein_name(SEXP ptm_listSEXP, SEXP protein_listSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< CharacterVector >::type ptm_list(ptm_listSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type protein_list(protein_listSEXP);
    rcpp_result_gen = Rcpp::wrap(extract_protein_name(ptm_list, protein_list));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_MSstatsTMTPTM_extract_protein_name", (DL_FUNC) &_MSstatsTMTPTM_extract_protein_name, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_MSstatsTMTPTM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
