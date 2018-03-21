/*
    Copyright 2013-2018 Paul Colby

    This file is part of libqtaws.

    Libqtaws is free software: you can redistribute it and/or modify
    it under the terms of the GNU Lesser General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    Libqtaws is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU Lesser General Public License for more details.

    You should have received a copy of the GNU Lesser General Public License
    along with libqtaws.  If not, see <http://www.gnu.org/licenses/>.
*/

#include "deleteapplicationreferencedatasourceresponse.h"
#include "deleteapplicationreferencedatasourceresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace AWS {
namespace KinesisAnalytics {

/**
 * @class  DeleteApplicationReferenceDataSourceResponse
 *
 * @brief  Handles KinesisAnalytics DeleteApplicationReferenceDataSource responses.
 *
 * @see    KinesisAnalyticsClient::deleteApplicationReferenceDataSource
 */

/**
 * @brief  Constructs a new {OperationName}}Response object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
DeleteApplicationReferenceDataSourceResponse::{OperationName}}Response(
        const {OperationName}}Request &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : KinesisAnalyticsResponse(new DeleteApplicationReferenceDataSourceResponsePrivate(this), parent)
{
    setRequest(new DeleteApplicationReferenceDataSourceRequest(request));
    setReply(reply);
}

const DeleteApplicationReferenceDataSourceRequest * DeleteApplicationReferenceDataSourceResponse::request() const
{
    Q_D(const DeleteApplicationReferenceDataSourceResponse);
    return static_cast<const DeleteApplicationReferenceDataSourceRequest *>(d->request);
}

/**
 * @brief  Parse a KinesisAnalytics DeleteApplicationReferenceDataSource response.
 *
 * @param  response  Response to parse.
 */
void DeleteApplicationReferenceDataSourceResponse::parseSuccess(QIODevice &response)
{
    Q_D(Response);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  DeleteApplicationReferenceDataSourceResponsePrivate
 *
 * @brief  Private implementation for DeleteApplicationReferenceDataSourceResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new DeleteApplicationReferenceDataSourceResponsePrivate object.
 *
 * @param  q  Pointer to this object's public DeleteApplicationReferenceDataSourceResponse instance.
 */
DeleteApplicationReferenceDataSourceResponsePrivate::DeleteApplicationReferenceDataSourceResponsePrivate(
    DeleteApplicationReferenceDataSourceQueueResponse * const q) : DeleteApplicationReferenceDataSourcePrivate(q)
{

}

/**
 * @brief  Parse an KinesisAnalytics DeleteApplicationReferenceDataSourceResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void DeleteApplicationReferenceDataSourceResponsePrivate::DeleteApplicationReferenceDataSourceResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("DeleteApplicationReferenceDataSourceResponse"));
    /// @todo
}

} // namespace KinesisAnalytics
} // namespace AWS
