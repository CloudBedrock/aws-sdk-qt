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

#include "upgradepublishedschemaresponse.h"
#include "upgradepublishedschemaresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace CloudDirectory {

/**
 * @class  UpgradePublishedSchemaResponse
 *
 * @brief  Handles CloudDirectory UpgradePublishedSchema responses.
 *
 * @see    CloudDirectoryClient::upgradePublishedSchema
 */

/**
 * @brief  Constructs a new UpgradePublishedSchemaResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpgradePublishedSchemaResponse::UpgradePublishedSchemaResponse(
        const UpgradePublishedSchemaRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : CloudDirectoryResponse(new UpgradePublishedSchemaResponsePrivate(this), parent)
{
    setRequest(new UpgradePublishedSchemaRequest(request));
    setReply(reply);
}

const UpgradePublishedSchemaRequest * UpgradePublishedSchemaResponse::request() const
{
    Q_D(const UpgradePublishedSchemaResponse);
    return static_cast<const UpgradePublishedSchemaRequest *>(d->request);
}

/**
 * @brief  Parse a CloudDirectory UpgradePublishedSchema response.
 *
 * @param  response  Response to parse.
 */
void UpgradePublishedSchemaResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpgradePublishedSchemaResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  UpgradePublishedSchemaResponsePrivate
 *
 * @brief  Private implementation for UpgradePublishedSchemaResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new UpgradePublishedSchemaResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpgradePublishedSchemaResponse instance.
 */
UpgradePublishedSchemaResponsePrivate::UpgradePublishedSchemaResponsePrivate(
    UpgradePublishedSchemaResponse * const q) : CloudDirectoryResponsePrivate(q)
{

}

/**
 * @brief  Parse an CloudDirectory UpgradePublishedSchemaResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpgradePublishedSchemaResponsePrivate::UpgradePublishedSchemaResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpgradePublishedSchemaResponse"));
    /// @todo
}

} // namespace CloudDirectory
} // namespace QtAws
