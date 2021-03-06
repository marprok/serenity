/*
 * Copyright (c) 2020, The SerenityOS developers.
 *
 * SPDX-License-Identifier: BSD-2-Clause
 */

#include <LibWeb/HTML/HTMLMediaElement.h>

namespace Web::HTML {

HTMLMediaElement::HTMLMediaElement(DOM::Document& document, QualifiedName qualified_name)
    : HTMLElement(document, move(qualified_name))
{
}

HTMLMediaElement::~HTMLMediaElement()
{
}

}
