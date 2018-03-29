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

#include "guarddutyresponse.h"
#include "guarddutyresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace GuardDuty {

/**
 * @class  GuardDutyResponse
 *
 * @brief  Handles GuardDuty GuardDuty responses.
 *
 * @see    GuardDutyClient::guardDuty
 */

/**
 * @brief  Constructs a new GuardDutyResponse object.
 *
 * @param  parent   This object's parent.
 */
GuardDutyResponse::GuardDutyResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new GuardDutyResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  GuardDutyResponsePrivate
 *
 * @brief  Private implementation for GuardDutyResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new GuardDutyResponsePrivate object.
 *
 * @param  q  Pointer to this object's public GuardDutyResponse instance.
 */
GuardDutyResponsePrivate::GuardDutyResponsePrivate(
    GuardDutyQueueResponse * const q) : GuardDutyPrivate(q)
{

}

} // namespace GuardDuty
} // namespace QtAws