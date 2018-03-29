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

#include "describemounttargetsresponse.h"
#include "describemounttargetsresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace EFS {

/**
 * @class  DescribeMountTargetsResponse
 *
 * @brief  Handles EFS DescribeMountTargets responses.
 *
 * @see    EFSClient::describeMountTargets
 */

/**
 * @brief  Constructs a new DescribeMountTargetsResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribeMountTargetsResponse::DescribeMountTargetsResponse(
        const DescribeMountTargetsRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : EFSResponse(new DescribeMountTargetsResponsePrivate(this), parent)
{
    setRequest(new DescribeMountTargetsRequest(request));
    setReply(reply);
}

const DescribeMountTargetsRequest * DescribeMountTargetsResponse::request() const
{
    Q_D(const DescribeMountTargetsResponse);
    return static_cast<const DescribeMountTargetsRequest *>(d->request);
}

/**
 * @brief  Parse a EFS DescribeMountTargets response.
 *
 * @param  response  Response to parse.
 */
void DescribeMountTargetsResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribeMountTargetsResponsePrivate
 *
 * @brief  Private implementation for DescribeMountTargetsResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribeMountTargetsResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribeMountTargetsResponse instance.
 */
DescribeMountTargetsResponsePrivate::DescribeMountTargetsResponsePrivate(
    DescribeMountTargetsQueueResponse * const q) : DescribeMountTargetsPrivate(q)
{

}

/**
 * @brief  Parse an EFS DescribeMountTargetsResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribeMountTargetsResponsePrivate::DescribeMountTargetsResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribeMountTargetsResponse"));
    /// @todo
}

} // namespace EFS
} // namespace QtAws
