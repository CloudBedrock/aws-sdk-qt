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

#include "describecomputeenvironmentsresponse.h"
#include "describecomputeenvironmentsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Batch {

/*!
 * \class QtAws::Batch::DescribeComputeEnvironmentsResponse
 *
 * \brief The DescribeComputeEnvironmentsResponse class provides an interace for Batch DescribeComputeEnvironments responses.
 *
 * \ingroup Batch
 *
 *  AWS Batch enables you to run batch computing workloads on the AWS Cloud. Batch computing is a common way for developers,
 *  scientists, and engineers to access large amounts of compute resources, and AWS Batch removes the undifferentiated heavy
 *  lifting of configuring and managing the required infrastructure. AWS Batch will be familiar to users of traditional
 *  batch computing software. This service can efficiently provision resources in response to jobs submitted in order to
 *  eliminate capacity constraints, reduce compute costs, and deliver results
 * 
 *  quickly>
 * 
 *  As a fully managed service, AWS Batch enables developers, scientists, and engineers to run batch computing workloads of
 *  any scale. AWS Batch automatically provisions compute resources and optimizes the workload distribution based on the
 *  quantity and scale of the workloads. With AWS Batch, there is no need to install or manage batch computing software,
 *  which allows you to focus on analyzing results and solving problems. AWS Batch reduces operational complexities, saves
 *  time, and reduces costs, which makes it easy for developers, scientists, and engineers to run their batch jobs in the
 *  AWS
 *
 * \sa BatchClient::describeComputeEnvironments
 */

/*!
 * @brief  Constructs a new DescribeComputeEnvironmentsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeComputeEnvironmentsResponse::DescribeComputeEnvironmentsResponse(
        const DescribeComputeEnvironmentsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : BatchResponse(new DescribeComputeEnvironmentsResponsePrivate(this), parent)
{
    setRequest(new DescribeComputeEnvironmentsRequest(request));
    setReply(reply);
}

const DescribeComputeEnvironmentsRequest * DescribeComputeEnvironmentsResponse::request() const
{
    Q_D(const DescribeComputeEnvironmentsResponse);
    return static_cast<const DescribeComputeEnvironmentsRequest *>(d->request);
}

/*!
 * @brief  Parse a Batch DescribeComputeEnvironments response.
 *
 * @param  response  Response to parse.
 */
void DescribeComputeEnvironmentsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeComputeEnvironmentsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeComputeEnvironmentsResponsePrivate
 *
 * \brief Private implementation for DescribeComputeEnvironmentsResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeComputeEnvironmentsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeComputeEnvironmentsResponse instance.
 */
DescribeComputeEnvironmentsResponsePrivate::DescribeComputeEnvironmentsResponsePrivate(
    DescribeComputeEnvironmentsResponse * const q) : BatchResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Batch DescribeComputeEnvironmentsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeComputeEnvironmentsResponsePrivate::parseDescribeComputeEnvironmentsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeComputeEnvironmentsResponse"));
    /// @todo
}

} // namespace Batch
} // namespace QtAws
