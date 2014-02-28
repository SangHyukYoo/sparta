/* ----------------------------------------------------------------------
   SPARTA - Stochastic PArallel Rarefied-gas Time-accurate Analyzer
   http://sparta.sandia.gov
   Steve Plimpton, sjplimp@sandia.gov, Michael Gallis, magalli@sandia.gov
   Sandia National Laboratories

   Copyright (2014) Sandia Corporation.  Under the terms of Contract
   DE-AC04-94AL85000 with Sandia Corporation, the U.S. Government retains
   certain rights in this software.  This software is distributed under 
   the GNU General Public License.

   See the README file in the top-level SPARTA directory.
------------------------------------------------------------------------- */

#ifdef REGION_CLASS

RegionStyle(sphere,RegSphere)

#else

#ifndef SPARTA_REGION_SPHERE_H
#define SPARTA_REGION_SPHERE_H

#include "region.h"

namespace SPARTA_NS {

class RegSphere : public Region {
 public:
  RegSphere(class SPARTA *, int, char **);
  int inside(double *);

 private:
  double xc,yc,zc;
  double radius;
};

}

#endif
#endif