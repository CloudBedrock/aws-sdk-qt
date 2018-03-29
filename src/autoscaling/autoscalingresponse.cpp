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

#include "autoscalingresponse.h"
#include "autoscalingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/**
 * @class  AutoScalingResponse
 *
 * @brief  Handles AutoScaling AutoScaling responses.
 *
 * @see    AutoScalingClient::autoScaling
 */

/**
 * @brief  Constructs a new AutoScalingResponse object.
 *
 * @param  parent   This object's parent.
 */
AutoScalingResponse::AutoScalingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AutoScalingResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  AutoScalingResponsePrivate
 *
 * @brief  Private implementation for AutoScalingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AutoScalingResponse instance.
 */
AutoScalingResponsePrivate::AutoScalingResponsePrivate(
    AutoScalingQueueResponse * const q) : AutoScalingPrivate(q)
{

}

} // namespace AutoScaling
} // namespace QtAws