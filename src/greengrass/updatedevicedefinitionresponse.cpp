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

#include "updatedevicedefinitionresponse.h"
#include "updatedevicedefinitionresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace Greengrass {

/*!
 * \class QtAws::Greengrass::UpdateDeviceDefinitionResponse
 *
 * \brief The UpdateDeviceDefinitionResponse class provides an interace for Greengrass UpdateDeviceDefinition responses.
 *
 * \ingroup Greengrass
 *
 *  AWS Greengrass seamlessly extends AWS onto physical devices so they can act locally on the data they generate, while
 *  still using the cloud for management, analytics, and durable storage. AWS Greengrass ensures your devices can respond
 *  quickly to local events and operate with intermittent connectivity. AWS Greengrass minimizes the cost of transmitting
 *
 * \sa GreengrassClient::updateDeviceDefinition
 */

/*!
 * @brief  Constructs a new UpdateDeviceDefinitionResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
UpdateDeviceDefinitionResponse::UpdateDeviceDefinitionResponse(
        const UpdateDeviceDefinitionRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : GreengrassResponse(new UpdateDeviceDefinitionResponsePrivate(this), parent)
{
    setRequest(new UpdateDeviceDefinitionRequest(request));
    setReply(reply);
}

const UpdateDeviceDefinitionRequest * UpdateDeviceDefinitionResponse::request() const
{
    Q_D(const UpdateDeviceDefinitionResponse);
    return static_cast<const UpdateDeviceDefinitionRequest *>(d->request);
}

/*!
 * @brief  Parse a Greengrass UpdateDeviceDefinition response.
 *
 * @param  response  Response to parse.
 */
void UpdateDeviceDefinitionResponse::parseSuccess(QIODevice &response)
{
    Q_D(UpdateDeviceDefinitionResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class UpdateDeviceDefinitionResponsePrivate
 *
 * \brief Private implementation for UpdateDeviceDefinitionResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new UpdateDeviceDefinitionResponsePrivate object.
 *
 * @param  q  Pointer to this object's public UpdateDeviceDefinitionResponse instance.
 */
UpdateDeviceDefinitionResponsePrivate::UpdateDeviceDefinitionResponsePrivate(
    UpdateDeviceDefinitionResponse * const q) : GreengrassResponsePrivate(q)
{

}

/*!
 * @brief  Parse an Greengrass UpdateDeviceDefinitionResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void UpdateDeviceDefinitionResponsePrivate::parseUpdateDeviceDefinitionResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("UpdateDeviceDefinitionResponse"));
    /// @todo
}

} // namespace Greengrass
} // namespace QtAws
