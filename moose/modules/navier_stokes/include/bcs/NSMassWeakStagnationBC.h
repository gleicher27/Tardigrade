/****************************************************************/
/* MOOSE - Multiphysics Object Oriented Simulation Environment  */
/*                                                              */
/*          All contents are licensed under LGPL V2.1           */
/*             See LICENSE for full restrictions                */
/****************************************************************/
#ifndef NSMASSWEAKSTAGNATIONBC_H
#define NSMASSWEAKSTAGNATIONBC_H

#include "NSWeakStagnationBC.h"

// Forward Declarations
class NSMassWeakStagnationBC;

template<>
InputParameters validParams<NSMassWeakStagnationBC>();


/**
 * The inviscid energy BC term with specified normal flow.
 */
class NSMassWeakStagnationBC : public NSWeakStagnationBC
{

public:
  NSMassWeakStagnationBC(const std::string & name, InputParameters parameters);

  virtual ~NSMassWeakStagnationBC(){}

protected:
  virtual Real computeQpResidual();
  virtual Real computeQpJacobian();
  virtual Real computeQpOffDiagJacobian(unsigned jvar);
};

#endif // NSMASSWEAKSTAGNATIONBC_H
