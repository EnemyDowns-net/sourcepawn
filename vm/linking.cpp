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
#include "environment.h"
#include "linking.h"

using namespace sp;

CodeChunk
sp::LinkCode(Environment* env, Assembler& masm, const char* name, const CodeDebugMap& mapping)
{
  if (masm.outOfMemory())
    return CodeChunk();

  auto length = masm.length();
  CodeChunk code = env->AllocateCode(length);

  auto address = code.address();
  if (!address)
    return code;

  masm.emitToExecutableMemory(address);

  env->WriteDebugMetadata(address, length, name, mapping);

  return code;
}
