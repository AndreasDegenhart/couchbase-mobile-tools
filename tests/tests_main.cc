//
// tests_main.cc
//
// Copyright © 2019 Couchbase. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
// http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
//

#define CATCH_CONFIG_MAIN
#include "catch.hpp"
#include "CaseListReporter.hh"

extern bool gC4ExpectingExceptions;
bool gC4ExpectingExceptions;

bool C4ExpectingExceptions();

bool C4ExpectingExceptions() {
    return gC4ExpectingExceptions;
}
