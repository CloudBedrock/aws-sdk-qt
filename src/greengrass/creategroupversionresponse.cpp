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

#include "creategroupversionresponse.h"
#include "creategroupversionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/**
 * @class  CreateGroupVersionResponse
 *
 * @brief  Handles Greengrass CreateGroupVersion responses.
 *
 * @see    GreengrassClient::createGroupVersion
 */

/**
 * @brief  Constructs a new CreateGroupVersionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
CreateGroupVersionResponse::CreateGroupVersionResponse(
        const CreateGroupVersionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new CreateGroupVersionResponsePrivate(this), parent)
{
    setRequest(new CreateGroupVersionRequest(request));
    setReply(reply);
}

const CreateGroupVersionRequest * CreateGroupVersionResponse::request() const
{
    Q_D(const CreateGroupVersionResponse);
    return static_cast<const CreateGroupVersionRequest *>(d->request);
}

/**
 * @brief  Parse a Greengrass CreateGroupVersion response.
 *
 * @param  response  Response to parse.
 */
void CreateGroupVersionResponse::parseSuccess(QIODevice &response)
{
    Q_D(CreateGroupVersionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/**
 * @internal
 *
 * @class  CreateGroupVersionResponsePrivate
 *
 * @brief  Private implementation for CreateGroupVersionResponse.
 */

/**
 * @internal
 *
 * @brief  Constructs a new CreateGroupVersionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public CreateGroupVersionResponse instance.
 */
CreateGroupVersionResponsePrivate::CreateGroupVersionResponsePrivate(
    CreateGroupVersionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/**
 * @brief  Parse an Greengrass CreateGroupVersionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void CreateGroupVersionResponsePrivate::parseCreateGroupVersionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("CreateGroupVersionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
