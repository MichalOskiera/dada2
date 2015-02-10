// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "../inst/include/dadac.h"
#include <Rcpp.h>
#include <string>
#include <set>

using namespace Rcpp;

// dada_uniques
Rcpp::List dada_uniques(std::vector< std::string > seqs, std::vector< int > abundances, Rcpp::NumericMatrix err, Rcpp::NumericMatrix score, Rcpp::NumericVector gap, Rcpp::NumericVector use_kmers, Rcpp::NumericVector kdist_cutoff, Rcpp::NumericVector band_size, Rcpp::NumericVector omegaA, Rcpp::LogicalVector use_singletons, Rcpp::NumericVector omegaS);
RcppExport SEXP dadac_dada_uniques(SEXP seqsSEXP, SEXP abundancesSEXP, SEXP errSEXP, SEXP scoreSEXP, SEXP gapSEXP, SEXP use_kmersSEXP, SEXP kdist_cutoffSEXP, SEXP band_sizeSEXP, SEXP omegaASEXP, SEXP use_singletonsSEXP, SEXP omegaSSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector< std::string > >::type seqs(seqsSEXP );
        Rcpp::traits::input_parameter< std::vector< int > >::type abundances(abundancesSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type err(errSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type score(scoreSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type gap(gapSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type use_kmers(use_kmersSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type kdist_cutoff(kdist_cutoffSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type band_size(band_sizeSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type omegaA(omegaASEXP );
        Rcpp::traits::input_parameter< Rcpp::LogicalVector >::type use_singletons(use_singletonsSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type omegaS(omegaSSEXP );
        Rcpp::List __result = dada_uniques(seqs, abundances, err, score, gap, use_kmers, kdist_cutoff, band_size, omegaA, use_singletons, omegaS);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// calibrate_kmers
Rcpp::DataFrame calibrate_kmers(std::vector< std::string > seqs, Rcpp::NumericMatrix score, Rcpp::NumericVector gap, int band, size_t max_aligns);
RcppExport SEXP dadac_calibrate_kmers(SEXP seqsSEXP, SEXP scoreSEXP, SEXP gapSEXP, SEXP bandSEXP, SEXP max_alignsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector< std::string > >::type seqs(seqsSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type score(scoreSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericVector >::type gap(gapSEXP );
        Rcpp::traits::input_parameter< int >::type band(bandSEXP );
        Rcpp::traits::input_parameter< size_t >::type max_aligns(max_alignsSEXP );
        Rcpp::DataFrame __result = calibrate_kmers(seqs, score, gap, band, max_aligns);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}
// evaluate_band
Rcpp::DataFrame evaluate_band(std::vector< std::string > seqs, Rcpp::NumericMatrix score, int gap, int band_size, size_t max_aligns);
RcppExport SEXP dadac_evaluate_band(SEXP seqsSEXP, SEXP scoreSEXP, SEXP gapSEXP, SEXP band_sizeSEXP, SEXP max_alignsSEXP) {
BEGIN_RCPP
    SEXP __sexp_result;
    {
        Rcpp::RNGScope __rngScope;
        Rcpp::traits::input_parameter< std::vector< std::string > >::type seqs(seqsSEXP );
        Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type score(scoreSEXP );
        Rcpp::traits::input_parameter< int >::type gap(gapSEXP );
        Rcpp::traits::input_parameter< int >::type band_size(band_sizeSEXP );
        Rcpp::traits::input_parameter< size_t >::type max_aligns(max_alignsSEXP );
        Rcpp::DataFrame __result = evaluate_band(seqs, score, gap, band_size, max_aligns);
        PROTECT(__sexp_result = Rcpp::wrap(__result));
    }
    UNPROTECT(1);
    return __sexp_result;
END_RCPP
}

// validate (ensure exported C++ functions exist before calling them)
static int dadac_RcppExport_validate(const char* sig) { 
    static std::set<std::string> signatures;
    if (signatures.empty()) {
    }
    return signatures.find(sig) != signatures.end();
}

// registerCCallable (register entry points for exported C++ functions)
RcppExport SEXP dadac_RcppExport_registerCCallable() { 
    R_RegisterCCallable("dadac", "dadac_RcppExport_validate", (DL_FUNC)dadac_RcppExport_validate);
    return R_NilValue;
}
