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

#include "updatetrailresponse.h"
#include "updatetrailresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudTrail {

/**
 * @class  UpdateTrailResponse
 *
 * @brief  Handles CloudTrail UpdateTrail responses.
 *
 * @see    CloudTrailClient::updateTrail
 */

/**
 * @brief  Constructs a new UpdateTrailResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateTrailResponse::UpdateTrailResponse(
        const UpdateTrailRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudTrailResponse(new UpdateTrailResponsePrivate(this), parent)
{
    setRequest(new UpdateTrailRequest(request));
    setReply(reply);
}

const UpdateTrailRequest * UpdateTrailResponse::request() const
{
    Q_D(const UpdateTrailResponse);
    return static_cast<const UpdateTrailRequest *>(d->request);
}

/**
 * @brief  Parse a CloudTrail UpdateTrail response.
 *
 * @param  response  Response to parse.
 */
void UpdateTrailResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpdateTrailResponsePrivate
 *
 * @brief  Private implementation for UpdateTrailResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpdateTrailResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateTrailResponse instance.
 */
UpdateTrailResponsePrivate::UpdateTrailResponsePrivate(
    UpdateTrailResponse * const q) : CloudTrailResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudTrail UpdateTrailResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateTrailResponsePrivate::UpdateTrailResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateTrailResponse"));
    /// @todo
}

} // namespace CloudTrail
} // namespace QtAws
