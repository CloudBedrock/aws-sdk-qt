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

#include "autoscalingplansresponse.h"
#include "autoscalingplansresponse_p.h"

#include <QDebug>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScalingPlans {

/**
 * @class  AutoScalingPlansResponse
 *
 * @brief  Handles AutoScalingPlans AutoScalingPlans responses.
 *
 * @see    AutoScalingPlansClient::autoScalingPlans
 */

/**
 * @brief  Constructs a new AutoScalingPlansResponse object.
 *
 * @param  parent   This object's parent.
 */
AutoScalingPlansResponse::AutoScalingPlansResponse(QObject * const parent)
    : QtAws::Core::AwsAbstractResponse(new AutoScalingPlansResponsePrivate(this), parent)
{

}

/**
 * @internal
 *
 * @class  AutoScalingPlansResponsePrivate
 *
 * @brief  Private implementation for AutoScalingPlansResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new AutoScalingPlansResponsePrivate object.
 *
 * @param  q  Pointer to this object's public AutoScalingPlansResponse instance.
 */
AutoScalingPlansResponsePrivate::AutoScalingPlansResponsePrivate(
    AutoScalingPlansQueueResponse * const q) : AutoScalingPlansPrivate(q)
{

}

} // namespace AutoScalingPlans
} // namespace QtAws
