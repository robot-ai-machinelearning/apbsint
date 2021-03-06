/* -------------------------------------------------------------------
 * LHOTSE: Toolbox for adaptive statistical models
 * -------------------------------------------------------------------
 * Project source file
 * Module: eptools
 * Desc.:  Module predeclarations
 * ------------------------------------------------------------------- */

#ifndef DE_EPTOOLS_H
#define DE_EPTOOLS_H

#if HAVE_CONFIG_H
#  include <config.h>
#endif

//BEGINNS(eptools)
  class EPScalPotentialBase;
  class EPScalarPotential;
  class SpecfunServices;
  class EPPotentialFactory;
  class EPPotentialNamedFactory;
  class PotentialManager;
  class DefaultPotManager;
  class ContainerPotManager;
  class PotManagerFactory;
  class EPPotLaplace;
  class EPPotProbit;
  class EPPotQuantileRegress;
  class EPPotSpikeSlab;
  class EPPotGaussian;
  class EPPotGaussMixture;
  class QuadraturePotential;
  class QuadPotProximal;
  class QuadPotProximalNewton;
  class EPPotQuadrature;
  class QuadratureServices;
  class EPPotQuadLaplaceApprox;
  class EPPotPoissonCommon;
  class EPPotPoissonExpRate;
  class EPPotPoissonLogisticRate;
#ifdef HAVE_WORKAROUND
  class AdaptiveQuadPackServices;
  class AdaptiveQuadPackDebugServices;
#endif
  class FactEPMaximumPiValues;
  class FactorizedEPRepresentation;
  class FactorizedEPDriver;
//ENDNS

#endif
