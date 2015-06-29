#pragma once
#include "html_tag.h"
#include "el_text.h"

namespace litehtml
{
	class el_space : public el_text
	{
	public:
		el_space(const tchar_t* text, std::shared_ptr<litehtml::document>& doc);
		virtual ~el_space();

		virtual bool	is_white_space() const;
		virtual bool	is_break() const;
	};
}