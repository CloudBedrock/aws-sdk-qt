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

#include "importmigrationtaskresponse.h"
#include "importmigrationtaskresponse_p.h"

#include <QDebug>
#include <QNetworkReply>
#include <QXmlStreamReader>

namespace QtAws {
namespace MigrationHub {

/*!
 * \class QtAws::MigrationHub::ImportMigrationTaskResponse
 *
 * \brief The ImportMigrationTaskResponse class encapsulates MigrationHub ImportMigrationTask responses.
 *
 * \ingroup MigrationHub
 *
 *  The AWS Migration Hub API methods help to obtain server and application migration status and integrate your
 *  resource-specific migration tool by providing a programmatic interface to Migration Hub.
 *
 * \sa MigrationHubClient::importMigrationTask
 */

/*!
 * @brief  Constructs a new ImportMigrationTaskResponse object.
 *
 * @param  request  Original AWS request.
 * @param  reply    AWS network response to observe.
 * @param  parent   This object's parent.
 */
ImportMigrationTaskResponse::ImportMigrationTaskResponse(
        const ImportMigrationTaskRequest &request,
        QNetworkReply * const reply,
        QObject * const parent)
    : MigrationHubResponse(new ImportMigrationTaskResponsePrivate(this), parent)
{
    setRequest(new ImportMigrationTaskRequest(request));
    setReply(reply);
}

const ImportMigrationTaskRequest * ImportMigrationTaskResponse::request() const
{
    Q_D(const ImportMigrationTaskResponse);
    return static_cast<const ImportMigrationTaskRequest *>(d->request);
}

/*!
 * @brief  Parse a MigrationHub ImportMigrationTask response.
 *
 * @param  response  Response to parse.
 */
void ImportMigrationTaskResponse::parseSuccess(QIODevice &response)
{
    Q_D(ImportMigrationTaskResponse);
    QXmlStreamReader xml(&response);
    /// @todo
}

/*!
 * \internal
 *
 * \class ImportMigrationTaskResponsePrivate
 *
 * \brief Private implementation for ImportMigrationTaskResponse.
 */

/*!
 * @internal
 *
 * @brief  Constructs a new ImportMigrationTaskResponsePrivate object.
 *
 * @param  q  Pointer to this object's public ImportMigrationTaskResponse instance.
 */
ImportMigrationTaskResponsePrivate::ImportMigrationTaskResponsePrivate(
    ImportMigrationTaskResponse * const q) : MigrationHubResponsePrivate(q)
{

}

/*!
 * @brief  Parse an MigrationHub ImportMigrationTaskResponse element.
 *
 * @param  xml  XML stream to parse.
 */
void ImportMigrationTaskResponsePrivate::parseImportMigrationTaskResponse(QXmlStreamReader &xml)
{
    Q_ASSERT(xml.name() == QLatin1String("ImportMigrationTaskResponse"));
    /// @todo
}

} // namespace MigrationHub
} // namespace QtAws
