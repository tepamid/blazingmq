// Copyright 2019-2023 Bloomberg Finance L.P.
// SPDX-License-Identifier: Apache-2.0
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// bmqio_decoratingchannelpartialimp.cpp                              -*-C++-*-
#include <bmqio_decoratingchannelpartialimp.h>

#include <bmqscm_version.h>
// BDE
#include <bsls_annotation.h>

namespace BloombergLP {
namespace bmqio {

// ---------------------------------
// class DecoratingChannelPartialImp
// ---------------------------------

DecoratingChannelPartialImp::DecoratingChannelPartialImp(
    const bsl::shared_ptr<Channel>& base,
    BSLS_ANNOTATION_UNUSED bslma::Allocator* basicAllocator)
: d_base(base)
{
    // NOTHING
}

DecoratingChannelPartialImp::~DecoratingChannelPartialImp()
{
    // NOTHING
}

}  // close package namespace
}  // close enterprise namespace