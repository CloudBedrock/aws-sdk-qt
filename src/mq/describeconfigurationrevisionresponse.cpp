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

#include "describeconfigurationrevisionresponse.h"
#include "describeconfigurationrevisionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MQ {

/*!
 * \class QtAws::MQ::DescribeConfigurationRevisionResponse
 *
 * \brief The DescribeConfigurationRevisionResponse class encapsulates MQ DescribeConfigurationRevision responses.
 *
 * \ingroup MQ
 *
 *  Amazon MQ is a managed message broker service for Apache ActiveMQ that makes it easy to set up and operate message
 *  brokers in the cloud. A message broker allows software applications and components to communicate using various
 *
 * \sa MQClient::describeConfigurationRevision
 */

/*!
 * @brief  Constructs a new DescribeConfigurationRevisionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeConfigurationRevisionResponse::DescribeConfigurationRevisionResponse(
        const DescribeConfigurationRevisionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MQResponse(new DescribeConfigurationRevisionResponsePrivate(this), parent)
{
    setRequest(new DescribeConfigurationRevisionRequest(request));
    setReply(reply);
}

const DescribeConfigurationRevisionRequest * DescribeConfigurationRevisionResponse::request() const
{
    Q_D(const DescribeConfigurationRevisionResponse);
    return static_cast<const DescribeConfigurationRevisionRequest *>(d->request);
}

/*!
 * @brief  Parse a MQ DescribeConfigurationRevision response.
 *
 * @param  response  Response to parse.
 */
void DescribeConfigurationRevisionResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeConfigurationRevisionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class DescribeConfigurationRevisionResponsePrivate
 *
 * \brief Private implementation for DescribeConfigurationRevisionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new DescribeConfigurationRevisionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeConfigurationRevisionResponse instance.
 */
DescribeConfigurationRevisionResponsePrivate::DescribeConfigurationRevisionResponsePrivate(
    DescribeConfigurationRevisionResponse * const q) : MQResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MQ DescribeConfigurationRevisionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeConfigurationRevisionResponsePrivate::parseDescribeConfigurationRevisionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeConfigurationRevisionResponse"));
    /// @todo
}

} // namespace MQ
} // namespace QtAws
