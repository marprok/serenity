/*
 * Copyright (c) 2020, The SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/HTML/HTMLOutputElement.h>

namespace Web::HTML {

HTMLOutputElement::HTMLOutputElement(DOM::Document& document, QualifiedName qualified_name)
    : HTMLElement(document, move(qualified_name))
{
}

HTMLOutputElement::~HTMLOutputElement()
{
}

}
