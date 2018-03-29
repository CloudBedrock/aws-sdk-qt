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

#include "applicationautoscalingresponse.h"
#include "applicationautoscalingresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace ApplicationAutoScaling {

/**
 * @class  ApplicationAutoScalingResponse
 *
 * @brief  Handles ApplicationAutoScaling ApplicationAutoScaling responses.
 *
 * @see    ApplicationAutoScalingClient::applicationAutoScaling
 */

/**
 * @brief  Constructs a new ApplicationAutoScalingResponse object.
 *
 * @param  parent   This object's parent.
 */
ApplicationAutoScalingResponse::ApplicationAutoScalingResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new ApplicationAutoScalingResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  ApplicationAutoScalingResponsePrivate
 *
 * @brief  Private implementation for ApplicationAutoScalingResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new ApplicationAutoScalingResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ApplicationAutoScalingResponse instance.
 */
ApplicationAutoScalingResponsePrivate::ApplicationAutoScalingResponsePrivate(
    ApplicationAutoScalingQueueResponse * const q) : ApplicationAutoScalingPrivate(q)
{

}

} // namespace ApplicationAutoScaling
} // namespace QtAws
