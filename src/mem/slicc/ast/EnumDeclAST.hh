
/*
 * Copyright (c) 1999-2008 Mark D. Hill and David A. Wood
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are
 * met: redistributions of source code must retain the above copyright
 * notice, this list of conditions and the following disclaimer;
 * redistributions in binary form must reproduce the above copyright
 * notice, this list of conditions and the following disclaimer in the
 * documentation and/or other materials provided with the distribution;
 * neither the name of the copyright holders nor the names of its
 * contributors may be used to endorse or promote products derived from
 * this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR
 * A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT
 * OWNER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL,
 * SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT
 * LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE,
 * DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY
 * THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT
 * (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 */

/*
 * EnummDeclAST.h
 *
 * Description:
 *
 * $Id$
 *
 */

#ifndef EnumDeclAST_H
#define EnumDeclAST_H

#include "mem/slicc/slicc_global.hh"
#include "mem/slicc/ast/DeclAST.hh"
#include "mem/slicc/ast/TypeAST.hh"
#include "mem/slicc/ast/TypeFieldAST.hh"

class EnumDeclAST : public DeclAST {
public:
  // Constructors
  EnumDeclAST(TypeAST* type_ast_ptr,
              PairListAST* pairs_ptr,
              Vector<TypeFieldAST*>* field_vec_ptr);

  // Destructor
  ~EnumDeclAST();

  // Public Methods
  virtual void generate();
  void print(ostream& out) const;
private:
  // Private Methods

  // Private copy constructor and assignment operator
  EnumDeclAST(const EnumDeclAST& obj);
  EnumDeclAST& operator=(const EnumDeclAST& obj);

  // Data Members (m_ prefix)
  TypeAST* m_type_ast_ptr;
  Vector<TypeFieldAST*>* m_field_vec_ptr;
};

// Output operator declaration
ostream& operator<<(ostream& out, const EnumDeclAST& obj);

// ******************* Definitions *******************

// Output operator definition
extern inline
ostream& operator<<(ostream& out, const EnumDeclAST& obj)
{
  obj.print(out);
  out << flush;
  return out;
}

#endif //EnumDeclAST_H
