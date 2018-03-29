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

#include "describegamesessiondetailsresponse.h"
#include "describegamesessiondetailsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace GameLift {

/**
 * @class  DescribeGameSessionDetailsResponse
 *
 * @brief  Handles GameLift DescribeGameSessionDetails responses.
 *
 * @see    GameLiftClient::describeGameSessionDetails
 */

/**
 * @brief  Constructs a new DescribeGameSessionDetailsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeGameSessionDetailsResponse::DescribeGameSessionDetailsResponse(
        const DescribeGameSessionDetailsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : DescribeGameSessionDetailsResponse(new DescribeGameSessionDetailsResponsePrivate(this), parent)
{
    setRequest(new DescribeGameSessionDetailsRequest(request));
    setReply(reply);
}

const DescribeGameSessionDetailsRequest * DescribeGameSessionDetailsResponse::request() const
{
    Q_D(const DescribeGameSessionDetailsResponse);
    return static_cast<const DescribeGameSessionDetailsRequest *>(d->request);
}

/**
 * @brief  Parse a GameLift DescribeGameSessionDetails response.
 *
 * @param  response  Response to parse.
 */
void DescribeGameSessionDetailsResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeGameSessionDetailsResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeGameSessionDetailsResponsePrivate
 *
 * @brief  Private implementation for DescribeGameSessionDetailsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeGameSessionDetailsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeGameSessionDetailsResponse instance.
 */
DescribeGameSessionDetailsResponsePrivate::DescribeGameSessionDetailsResponsePrivate(
    DescribeGameSessionDetailsResponse * const q) : GameLiftResponsePrivate(q)
{

}

/**
 * @brief  Parse an GameLift DescribeGameSessionDetailsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeGameSessionDetailsResponsePrivate::parseDescribeGameSessionDetailsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeGameSessionDetailsResponse"));
    /// @todo
}

} // namespace GameLift
} // namespace QtAws
