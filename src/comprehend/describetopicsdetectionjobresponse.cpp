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

#include "describetopicsdetectionjobresponse.h"
#include "describetopicsdetectionjobresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Comprehend {

/**
 * @class  DescribeTopicsDetectionJobResponse
 *
 * @brief  Handles Comprehend DescribeTopicsDetectionJob responses.
 *
 * @see    ComprehendClient::describeTopicsDetectionJob
 */

/**
 * @brief  Constructs a new DescribeTopicsDetectionJobResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTopicsDetectionJobResponse::DescribeTopicsDetectionJobResponse(
        const DescribeTopicsDetectionJobRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : ComprehendResponse(new DescribeTopicsDetectionJobResponsePrivate(this), parent)
{
    setRequest(new DescribeTopicsDetectionJobRequest(request));
    setReply(reply);
}

const DescribeTopicsDetectionJobRequest * DescribeTopicsDetectionJobResponse::request() const
{
    Q_D(const DescribeTopicsDetectionJobResponse);
    return static_cast<const DescribeTopicsDetectionJobRequest *>(d->request);
}

/**
 * @brief  Parse a Comprehend DescribeTopicsDetectionJob response.
 *
 * @param  response  Response to parse.
 */
void DescribeTopicsDetectionJobResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTopicsDetectionJobResponsePrivate
 *
 * @brief  Private implementation for DescribeTopicsDetectionJobResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTopicsDetectionJobResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTopicsDetectionJobResponse instance.
 */
DescribeTopicsDetectionJobResponsePrivate::DescribeTopicsDetectionJobResponsePrivate(
    DescribeTopicsDetectionJobQueueResponse * const q) : DescribeTopicsDetectionJobPrivate(q)
{

}

/**
 * @brief  Parse an Comprehend DescribeTopicsDetectionJobResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTopicsDetectionJobResponsePrivate::DescribeTopicsDetectionJobResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTopicsDetectionJobResponse"));
    /// @todo
}

} // namespace Comprehend
} // namespace QtAws
