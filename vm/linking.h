// vim: set sts=2 ts=8 sw=2 tw=99 et:
// 
// Copyright (C) 2006-2015 AlliedModders LLC
// 
// This file is part of SourcePawn. SourcePawn is free software: you can
// redistribute it and/or modify it under the terms of the GNU General Public
// License as published by the Free Software Foundation, either version 3 of
// the License, or (at your option) any later version.
//
// You should have received a copy of the GNU General Public License along with
// SourcePawn. If not, see http://www.gnu.org/licenses/.
//
#ifndef _include_sourcepawn_vm_x86_utils_h_
#define _include_sourcepawn_vm_x86_utils_h_

#include <vector>
#include <stdint.h>

#include "macro-assembler.h"

namespace sp {

class Environment;
struct CodeDebugMapping;
using CodeDebugMap = std::vector<CodeDebugMapping>;

CodeChunk LinkCode(Environment* env, Assembler& masm, const char* name, const CodeDebugMap& mapping);

}

#endif // _include_sourcepawn_vm_x86_utils_h_
