// i_tab.hpp
/*
neogfx C++ GUI Library
Copyright (c) 2015 Leigh Johnston.  All Rights Reserved.

This program is free software: you can redistribute it and / or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 3 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#pragma once

#include <neogfx/neogfx.hpp>
#include <neogfx/core/i_event.hpp>
#include <neogfx/gfx/i_image.hpp>
#include <neogfx/gui/widget/i_widget.hpp>

namespace neogfx
{
    class i_tab_container;

    class i_tab
    {
    public:
        declare_event(selected)
        declare_event(deselected)
    public:
        virtual ~i_tab() = default;
    public:
        virtual const i_tab_container& container() const = 0;
        virtual i_tab_container& container() = 0;
        virtual bool closable() const = 0;
        virtual void set_closable(bool aClosable) = 0;
        virtual bool is_selected() const = 0;
        virtual bool is_deselected() const = 0;
        virtual void select() = 0;
    public:
        virtual const std::string& text() const = 0;
        virtual void set_text(const std::string& aText) = 0;
        virtual void set_image(const i_texture& aTexture) = 0;
        virtual void set_image(const i_image& aImage) = 0;
    public:
        virtual const i_widget& as_widget() const = 0;
        virtual i_widget& as_widget() = 0;
    };
}