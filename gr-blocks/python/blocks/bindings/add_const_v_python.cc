/*
 * Copyright 2020 Free Software Foundation, Inc.
 *
 * This file is part of GNU Radio
 *
 * SPDX-License-Identifier: GPL-3.0-or-later
 *
 */

/***********************************************************************************/
/* This file is automatically generated using bindtool and can be manually edited  */
/* The following lines can be configured to regenerate this file during cmake      */
/* If manual edits are made, the following tags should be modified accordingly.    */
/* BINDTOOL_GEN_AUTOMATIC(0)                                                       */
/* BINDTOOL_USE_PYGCCXML(0)                                                        */
/* BINDTOOL_HEADER_FILE(add_const_v.h)                                        */
/* BINDTOOL_HEADER_FILE_HASH(17a5a0f4ceba6f827de7f9712c2da4a7)                     */
/***********************************************************************************/

#include <pybind11/complex.h>
#include <pybind11/pybind11.h>
#include <pybind11/stl.h>

namespace py = pybind11;

#include <gnuradio/blocks/add_const_v.h>

template <typename T>
void bind_add_const_v_template(py::module& m, const char* classname)
{
    using add_const_v = gr::blocks::add_const_v<T>;

    py::class_<add_const_v,
               gr::sync_block,
               gr::block,
               gr::basic_block,
               std::shared_ptr<add_const_v>>(m, classname)
        .def(py::init(&gr::blocks::add_const_v<T>::make));
}

void bind_add_const_v(py::module& m)
{
    bind_add_const_v_template<std::uint8_t>(m, "add_const_vbb");
    bind_add_const_v_template<std::int16_t>(m, "add_const_vss");
    bind_add_const_v_template<std::int32_t>(m, "add_const_vii");
    bind_add_const_v_template<float>(m, "add_const_vff");
    bind_add_const_v_template<gr_complex>(m, "add_const_vcc");
}