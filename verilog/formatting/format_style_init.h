// Copyright 2017-2020 The Verible Authors.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//      http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef VERIBLE_VERILOG_FORMATTING_FORMAT_STYLE_INIT_H_
#define VERIBLE_VERILOG_FORMATTING_FORMAT_STYLE_INIT_H_

#include "verilog/formatting/format_style.h"

namespace verilog {
namespace formatter {

// Initialize format style from flags.
void InitializeFromFlags(FormatStyle *style);

// TODO: initialize from configuration file.
// https://github.com/chipsalliance/verible/issues/898
// Possibly using common/text/config_utils.h
}  // namespace formatter
}  // namespace verilog
#endif  // VERIBLE_VERILOG_FORMATTING_FORMAT_STYLE_INIT_H_
