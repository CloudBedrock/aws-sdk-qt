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

#include "describetapearchivesresponse.h"
#include "describetapearchivesresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace StorageGateway {

/**
 * @class  DescribeTapeArchivesResponse
 *
 * @brief  Handles StorageGateway DescribeTapeArchives responses.
 *
 * @see    StorageGatewayClient::describeTapeArchives
 */

/**
 * @brief  Constructs a new DescribeTapeArchivesResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeTapeArchivesResponse::DescribeTapeArchivesResponse(
        const DescribeTapeArchivesRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : StorageGatewayResponse(new DescribeTapeArchivesResponsePrivate(this), parent)
{
    setRequest(new DescribeTapeArchivesRequest(request));
    setReply(reply);
}

const DescribeTapeArchivesRequest * DescribeTapeArchivesResponse::request() const
{
    Q_D(const DescribeTapeArchivesResponse);
    return static_cast<const DescribeTapeArchivesRequest *>(d->request);
}

/**
 * @brief  Parse a StorageGateway DescribeTapeArchives response.
 *
 * @param  response  Response to parse.
 */
void DescribeTapeArchivesResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribeTapeArchivesResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeTapeArchivesResponsePrivate
 *
 * @brief  Private implementation for DescribeTapeArchivesResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeTapeArchivesResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeTapeArchivesResponse instance.
 */
DescribeTapeArchivesResponsePrivate::DescribeTapeArchivesResponsePrivate(
    DescribeTapeArchivesResponse * const q) : StorageGatewayResponsePrivate(q)
{

}

/**
 * @brief  Parse an StorageGateway DescribeTapeArchivesResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeTapeArchivesResponsePrivate::DescribeTapeArchivesResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeTapeArchivesResponse"));
    /// @todo
}

} // namespace StorageGateway
} // namespace QtAws
