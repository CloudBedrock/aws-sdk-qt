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

#include "putlifecyclehookresponse.h"
#include "putlifecyclehookresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace AutoScaling {

/*!
 * \class QtAws::AutoScaling::PutLifecycleHookResponse
 *
 * \brief The PutLifecycleHookResponse class encapsulates AutoScaling PutLifecycleHook responses.
 *
 * \ingroup AutoScaling
 *
 *  <fullname>Amazon EC2 Auto Scaling</fullname>
 * 
 *  Amazon EC2 Auto Scaling is designed to automatically launch or terminate EC2 instances based on user-defined policies,
 *  schedules, and health checks. Use this service in conjunction with the AWS Auto Scaling, Amazon CloudWatch, and Elastic
 *  Load Balancing
 *
 * \sa AutoScalingClient::putLifecycleHook
 */

/*!
 * @brief  Constructs a new PutLifecycleHookResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
PutLifecycleHookResponse::PutLifecycleHookResponse(
        const PutLifecycleHookRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : AutoScalingResponse(new PutLifecycleHookResponsePrivate(this), parent)
{
    setRequest(new PutLifecycleHookRequest(request));
    setReply(reply);
}

const PutLifecycleHookRequest * PutLifecycleHookResponse::request() const
{
    Q_D(const PutLifecycleHookResponse);
    return static_cast<const PutLifecycleHookRequest *>(d->request);
}

/*!
 * @brief  Parse a AutoScaling PutLifecycleHook response.
 *
 * @param  response  Response to parse.
 */
void PutLifecycleHookResponse::parseSuccess(QIODevice &response)
{
    Q_D(PutLifecycleHookResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class PutLifecycleHookResponsePrivate
 *
 * \brief Private implementation for PutLifecycleHookResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new PutLifecycleHookResponsePrivate object.
 *
 * @param  q  Pointer to this object's public PutLifecycleHookResponse instance.
 */
PutLifecycleHookResponsePrivate::PutLifecycleHookResponsePrivate(
    PutLifecycleHookResponse * const q) : AutoScalingResponsePrivate(q)
{

}

/*!
 * @brief  Parse an AutoScaling PutLifecycleHookResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void PutLifecycleHookResponsePrivate::parsePutLifecycleHookResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("PutLifecycleHookResponse"));
    /// @todo
}

} // namespace AutoScaling
} // namespace QtAws
