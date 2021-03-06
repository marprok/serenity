/*
 * Copyright (c) 2020, The SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/HTML/HTMLTableColElement.h>

namespace Web::HTML {

HTMLTableColElement::HTMLTableColElement(DOM::Document& document, QualifiedName qualified_name)
    : HTMLElement(document, move(qualified_name))
{
}

HTMLTableColElement::~HTMLTableColElement()
{
}

}
