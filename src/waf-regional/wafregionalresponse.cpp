/*
    Copyright 2013-2018 Paul Colby

    This file is part of the AWS SDK for Qt.

    AWS SDK for Qt is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    AWS SDK for Qt is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with the AWS SDK for Qt.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "wafregionalresponse.h"
#include "wafregionalresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace WAFRegional {

/**
 * @class  WAFRegionalResponse
 *
 * @brief  Handles WAFRegional WAFRegional responses.
 *
 * @see    WAFRegionalClient::wAFRegional
 */

/**
 * @brief  Constructs a new WAFRegionalResponse object.
 *
 * @param  parent   This object's parent.
 */
WAFRegionalResponse::WAFRegionalResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new WAFRegionalResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  WAFRegionalResponsePrivate
 *
 * @brief  Private implementation for WAFRegionalResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new WAFRegionalResponsePrivate object.
 *
 * @param  q  Pointer to this object's public WAFRegionalResponse instance.
 */
WAFRegionalResponsePrivate::WAFRegionalResponsePrivate(
    WAFRegionalQueueResponse * const q) : WAFRegionalPrivate(q)
{

}

} // namespace WAFRegional
} // namespace QtAws
