#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <time.h>
#include <string.h>
#include "wavefront/wavefront_align.h"
#include "wavefront/wfa.h"
#include "wavefront/wavefront_attributes.h"
#include "utils/commons.h"

int main(void){

	wavefront_aligner_attr_t attributes = wavefront_aligner_attr_default;
	attributes.distance_metric = gap_affine;
	attributes.affine_penalties.mismatch = 4;
	attributes.affine_penalties.gap_opening = 6;
	attributes.affine_penalties.gap_extension = 2;
	// Initialize Wavefront Aligner
	wavefront_aligner_t* const wf_aligner = wavefront_aligner_new(&attributes);


}

//> gcc -Wall -g -O3 -march=native  -L../lib -I.. wfa_basic.c -o bin/wfa_basic -lwfa -fopenmp -lm -lrt

