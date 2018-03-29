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

#include "cloudhsmresponse.h"
#include "cloudhsmresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudHSM {

/**
 * @class  CloudHSMResponse
 *
 * @brief  Handles CloudHSM CloudHSM responses.
 *
 * @see    CloudHSMClient::cloudHSM
 */

/**
 * @brief  Constructs a new CloudHSMResponse object.
 *
 * @param  parent   This object's parent.
 */
CloudHSMResponse::CloudHSMResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new CloudHSMResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  CloudHSMResponsePrivate
 *
 * @brief  Private implementation for CloudHSMResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CloudHSMResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CloudHSMResponse instance.
 */
CloudHSMResponsePrivate::CloudHSMResponsePrivate(
    CloudHSMQueueResponse * const q) : CloudHSMPrivate(q)
{

}

} // namespace CloudHSM
} // namespace QtAws
