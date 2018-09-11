#pragma once

#include <torch/cuda.h>
#include <torch/jit.h>
#include <torch/nn.h>
#include <torch/optim.h>
#include <torch/serialization.h>
#include <torch/tensor.h>
#include <torch/utils.h>

#ifdef TORCH_WITH_PYTHON_BINDINGS
#include <torch/python.h>
#endif // defined(TORCH_WITH_PYTHON_BINDINGS)
