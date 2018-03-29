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

#include "cancelclusterresponse.h"
#include "cancelclusterresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Snowball {

/**
 * @class  CancelClusterResponse
 *
 * @brief  Handles Snowball CancelCluster responses.
 *
 * @see    SnowballClient::cancelCluster
 */

/**
 * @brief  Constructs a new CancelClusterResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CancelClusterResponse::CancelClusterResponse(
        const CancelClusterRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CancelClusterResponse(new CancelClusterResponsePrivate(this), parent)
{
    setRequest(new CancelClusterRequest(request));
    setReply(reply);
}

const CancelClusterRequest * CancelClusterResponse::request() const
{
    Q_D(const CancelClusterResponse);
    return static_cast<const CancelClusterRequest *>(d->request);
}

/**
 * @brief  Parse a Snowball CancelCluster response.
 *
 * @param  response  Response to parse.
 */
void CancelClusterResponse::parseSuccess(QIODevice &response)
{
    Q_D(CancelClusterResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CancelClusterResponsePrivate
 *
 * @brief  Private implementation for CancelClusterResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CancelClusterResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CancelClusterResponse instance.
 */
CancelClusterResponsePrivate::CancelClusterResponsePrivate(
    CancelClusterResponse * const q) : SnowballResponsePrivate(q)
{

}

/**
 * @brief  Parse an Snowball CancelClusterResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CancelClusterResponsePrivate::parseCancelClusterResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CancelClusterResponse"));
    /// @todo
}

} // namespace Snowball
} // namespace QtAws
