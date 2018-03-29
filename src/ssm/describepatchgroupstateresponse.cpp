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

#include "describepatchgroupstateresponse.h"
#include "describepatchgroupstateresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace SSM {

/**
 * @class  DescribePatchGroupStateResponse
 *
 * @brief  Handles SSM DescribePatchGroupState responses.
 *
 * @see    SSMClient::describePatchGroupState
 */

/**
 * @brief  Constructs a new DescribePatchGroupStateResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DescribePatchGroupStateResponse::DescribePatchGroupStateResponse(
        const DescribePatchGroupStateRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : SSMResponse(new DescribePatchGroupStateResponsePrivate(this), parent)
{
    setRequest(new DescribePatchGroupStateRequest(request));
    setReply(reply);
}

const DescribePatchGroupStateRequest * DescribePatchGroupStateResponse::request() const
{
    Q_D(const DescribePatchGroupStateResponse);
    return static_cast<const DescribePatchGroupStateRequest *>(d->request);
}

/**
 * @brief  Parse a SSM DescribePatchGroupState response.
 *
 * @param  response  Response to parse.
 */
void DescribePatchGroupStateResponse::parseSuccess(QIODevice &response)
{
    Q_D(DescribePatchGroupStateResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DescribePatchGroupStateResponsePrivate
 *
 * @brief  Private implementation for DescribePatchGroupStateResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DescribePatchGroupStateResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DescribePatchGroupStateResponse instance.
 */
DescribePatchGroupStateResponsePrivate::DescribePatchGroupStateResponsePrivate(
    DescribePatchGroupStateResponse * const q) : SSMResponsePrivate(q)
{

}

/**
 * @brief  Parse an SSM DescribePatchGroupStateResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DescribePatchGroupStateResponsePrivate::DescribePatchGroupStateResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DescribePatchGroupStateResponse"));
    /// @todo
}

} // namespace SSM
} // namespace QtAws
